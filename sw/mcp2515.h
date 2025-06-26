/* Usage:
 *
 * #include <stdbool.h>
 * #include <stdint.h>
 * #include "mcp2515.h"
 * Define all client-provided functions.
 */

/* RXBnCTRL options */
enum {
	RXM_ACCEPT_ALL = (1u << 6u) & (1u << 5u), /* disable mask/filters; receive all messages */
	RXM_FILTER     = 0x00,			  /* accept messages that meet filter criteria */
} rxb0ctrl_opts;

/* BFPCTRL options */
enum {
	/* RX0BF enable and function */
	RX0BF_DISABLE = 0x00, /* RX0BF disabled */
	RX0BF_INT     = 0x05, /* 0b0000_0101 RX0BF interrupt */
	RX0BF_OUT     = 0x04, /* 0b0000_0100 RX0BF digital output */

	/* RX1BF enable and function */
	RX1BF_DISABLE = 0x00, /* RX1BF disabled */
	RX1BF_INT     = 0x0A, /* 0b0000_1010 RX1BF interrupt */
	RX1BF_OUT     = 0x08, /* 0b0000_1000 RX1BF digital output */
} bfpctrl_opts;

/* CANINTE options */
enum {
	MERRE = (1u << 7u), /* interrupt on error during message reception or transmission */
	WAKIE = (1u << 6u), /* interrupt on CAN bus activity */
	ERRIE = (1u << 5u), /* interrupt on error */
	TX2IE = (1u << 4u), /* interrupt on TXB2 becoming empty */
	TX1IE = (1u << 3u), /* interrupt on TXB1 becoming empty */
	TX0IE = (1u << 2u), /* interrupt on TXB0 becoming empty */
	RX1IE = (1u << 1u), /* interrupt when message received in RXB1 */
	RX0IE = (1u << 0u), /* interrupt when message received in RXB0 */
} caninte_opts;

typedef struct {
	uint8_t rxb0ctrl; /* receive buffer 0 control */
	uint8_t rxb1ctrl; /* receive buffer 1 control */
	uint8_t bfpctrl;  /* RXnBF pin control */
} MCP2515_Config;

/* Filter match flags in RX_STATUS response */
typedef enum {
	RXF0,
	RXF1,
	RXF2,
	RXF3,
	RXF4,
	RXF5,
	RXF0_ROLLOVER_RXB1,
	RXF1_ROLLOVER_RXB1,
} MCP2515_FilterMatch;

/* To be defined by the client: */
void mcp2515_cs_lo(void);
void mcp2515_cs_hi(void);
void mcp2515_sck_lo(void);
void mcp2515_sck_hi(void);
void mcp2515_si_lo(void);
void mcp2515_si_hi(void);
bool mcp2515_so(void);

/* Provided by the library: */
void mcp2515_init(const MCP2515_Config *config);
void mcp2515_reset(void);
uint8_t mcp2515_read(uint8_t addr);
void mcp2515_write(uint8_t addr, uint8_t data);
uint8_t mcp2515_rx_status(void);
MCP2515_FilterMatch mcp2515_filter_match(uint8_t rx_status);
void mcp2515_read_data_rxb0(uint8_t data[8]);
void mcp2515_read_data_rxb1(uint8_t data[8]);
