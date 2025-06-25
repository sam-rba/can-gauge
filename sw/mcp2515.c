/* Uses */
#include "util.h"
#include <stdbool.h>
#include <stdint.h>

/* Implements */
#include "mcp2515.h"

#define cs_lo()	 mcp2515_cs_lo()
#define cs_hi()	 mcp2515_cs_hi()
#define sck_lo() mcp2515_sck_lo()
#define sck_hi() mcp2515_sck_hi()
#define si_lo()	 mcp2515_si_lo()
#define si_hi()	 mcp2515_si_hi()
#define so()	 mcp2515_so()

/* Masks and shifts */
enum {
	/* Filter match in RX_STATUS response */
	RX_STATUS_FILTER_MATCH_MASK = 0x7, /* 0b0111 */

	/* REQOP in CANCTRL */
	REQOP_MASK	 = 0xE0, /* 0b1110_0000 */
	REQOP_MODE_SHIFT = 5,

	/* OPMOD in CANSTAT */
	OPMOD_MASK	 = 0xE0, /* 0b1110_0000 */
	OPMOD_MODE_SHIFT = 5,
};

/* SPI bytes */
enum {
	RESET	     = 0xC0,
	READ	     = 0x03,
	READ_RXB0_D0 = 0x66,
	READ_RXB1_D0 = 0x76,
	WRITE	     = 0x02,
	RX_STATUS    = 0xB0,
} spi_bytes;

/* Register addresses */
enum {
	BFPCTRL	 = 0x0C, /* RXnBF pin control and status register */
	CANSTAT	 = 0x0E, /* CAN status register */
	CANCTRL	 = 0x0F, /*  CAN control register */
	CANINTF	 = 0x2C, /* CAN interrupt flag register */
	RXB0CTRL = 0x60, /* receive buffer 0 control register */
} reg_addrs;

/* Modes of operation */
typedef enum {
	MODE_NORMAL,
	MODE_SLEEP,
	MODE_LOOPBACK,
	MODE_LISTEN_ONLY,
	MODE_CONFIG,
} Mode;

static void
tick(void) {
	sck_hi();
	sck_lo();
}

static void
write(uint8_t byt) {
	uint8_t i;

	for (i = 7u; i >= 0u; i--) {
		if (byt & (1u << i)) {
			si_hi();
		} else {
			si_lo();
		}
		tick();
	}
}

static uint8_t
read(void) {
	uint8_t data, i;

	data = 0u;
	for (i = 7u; i >= 0u; i--) {
		tick();
		data |= (so()) ? (1u << i) : 0u;
	}
	return data;
}

static void
set_mode(Mode mode) {
	uint8_t canctrl, canstat;

	/* Read current CANCTRL */
	cs_lo();
	write(READ);
	write(CANCTRL);
	canctrl = read();
	cs_hi();

	/* Set new CANCTRL */
	canctrl =
	    (canctrl & ~REQOP_MASK) | ((mode << REQOP_MODE_SHIFT) & REQOP_MASK);
	cs_lo();
	write(WRITE);
	write(CANCTRL);
	write(canctrl);
	cs_hi();

	/* Wait for change to take effect */
	do {
		cs_lo();
		write(READ);
		write(CANSTAT);
		canstat = read();
		cs_hi();
	} while ((canstat & OPMOD_MASK) !=
		 ((mode << OPMOD_MODE_SHIFT) & OPMOD_MASK));
}

void
mcp2515_init(const MCP2515_Config *config) {
	cs_hi();
	sck_lo();
	si_lo();

	mcp2515_reset();
	mcp2515_write(RXB0CTRL, config->rxb0ctrl);
	mcp2515_write(BFPCTRL, config->bfpctrl);
	// TODO: set masks and filters
	set_mode(MODE_NORMAL);
}

void
mcp2515_reset(void) {
	cs_lo();
	write(RESET);
	cs_hi();
}

uint8_t
mcp2515_read(uint8_t addr) {
	uint8_t data;

	cs_lo();
	write(READ);
	write(addr);
	data = read();
	cs_hi();
	return data;
}

void
mcp2515_write(uint8_t addr, uint8_t data) {
	cs_lo();
	write(WRITE);
	write(addr);
	write(data);
	cs_hi();
}

uint8_t
mcp2515_rx_status(void) {
	uint8_t rx_status;

	cs_lo();
	write(RX_STATUS);
	rx_status = read();
	cs_hi();
	return rx_status;
}

MCP2515_FilterMatch
mcp2515_filter_match(uint8_t rx_status) {
	return rx_status & RX_STATUS_FILTER_MATCH_MASK;
}

static void
read_data(uint8_t data[8]) {
	uint8_t i;

	for (i = 0u; i < 8u; i++) {
		data[i] = read();
	}
}

void
mcp2515_read_data_rxb0(uint8_t data[8]) {
	cs_lo();
	write(READ_RXB0_D0);
	read_data(data);
	cs_hi();
}

void
mcp2515_read_data_rxb1(uint8_t data[8]) {
	cs_lo();
	write(READ_RXB1_D0);
	read_data(data);
	cs_hi();
}
