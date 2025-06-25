#include <stdint.h>

#include "mcc_generated_files/system/interrupt.h"
#include "mcc_generated_files/system/system.h"

#include "mcp2515.h"

static const MCP2515_Config mcp2515_config = {
    .rxb0ctrl = RXM_FILTER,
    .rxb1ctrl = RXM_FILTER,
    .bfpctrl  = MERRE | ERRIE | RX1IE | RX0IE,
};

/* Receive a CAN frame from the MCP2515. */
static void
recv_frame(void) {
	uint8_t rx_status;
	MCP2515_FilterMatch filter;
	static uint8_t data[8];

	rx_status = mcp2515_rx_status();
	filter	  = mcp2515_filter_match(rx_status);
	switch (filter) {
	case RXF0:
		mcp2515_read_data_rxb0(data);
		// TODO
		break;
	case RXF1:
		mcp2515_read_data_rxb0(data);
		// TODO
		break;
	case RXF2:
		mcp2515_read_data_rxb1(data);
		// TODO
		break;
	case RXF3:
		mcp2515_read_data_rxb1(data);
		// TODO
		break;
	case RXF4:
		mcp2515_read_data_rxb1(data);
		// TODO
		break;
	case RXF5:
		mcp2515_read_data_rxb1(data);
		// TODO
		break;
	case RXF0_ROLLOVER_RXB1:
		mcp2515_read_data_rxb1(data);
		// TODO
		break;
	case RXF1_ROLLOVER_RXB1:
		mcp2515_read_data_rxb1(data);
		// TODO
	}
}

void
__interrupt() isr(void) {
	if (INTF) {
		recv_frame();
	}
}

int
main(void) {
	SYSTEM_Initialize();

	INTERRUPT_Initialize();
	INTERRUPT_PeripheralInterruptDisable();
	EXT_INT_risingEdgeSet();
	EXT_INT_InterruptEnable();
	INTERRUPT_GlobalInterruptEnable();

	mcp2515_init(&mcp2515_config);

	for (;;) {
	}
}

void
mcp2515_cs_lo(void) {
	CS_SetLow();
}

void
mcp2515_cs_hi(void) {
	CS_SetHigh();
}

void
mcp2515_sck_lo(void) {
	SCK_SetLow();
}

void
mcp2515_sck_hi(void) {
	SCK_SetHigh();
}

void
mcp2515_si_lo(void) {
	SO_SetLow();
}

void
mcp2515_si_hi(void) {
	SO_SetHigh();
}

bool
mcp2515_so(void) {
	return SI_GetValue();
}
