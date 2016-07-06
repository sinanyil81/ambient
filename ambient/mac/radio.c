#include "mac.h"

/*---------------------------------------------------
 * Initialization for the RX and TX ports
 ---------------------------------------------------*/
void radio_init(){
	TX_DIR |= TX_PIN; // configure TX port as an output port
	TX_OUT &= ~TX_PIN;

	RX_EN_DIR |= RX_EN_PIN; // configure RX_EN port as an output port
	RX_EN_OUT &= ~RX_EN_PIN;


	RX_DIR &= ~RX_PIN; 	// configure RX port as an input port
	RX_REN |= RX_PIN; 	// enable internal pull-up/down resistors
	//RX_OUT |= RX_PIN; 	// select pull-up mode
	RX_IES &=~RX_PIN; 	// low -> high is selected with Edge Select register
	RX_IFG &=~RX_PIN; 	// clear the flag to prevent immediate interrupt
	RX_IE |= RX_PIN; 	// enable interrupts for RX pin

	rx_on();
}

