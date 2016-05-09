#include "mac.h"

#pragma vector=RX_VECTOR
__interrupt void INT_PortRX(void) {
	switch(RX_IFG&RX_PIN)
	{
		case RX_PIN:
			RX_IFG &=RX_PIN;  // clear the interrupt flag
			// toggle rising to falling edge to detect transitions
			// wake-up()
			// receive bits...
			led_toggle(LED2);
			return;

		default:
			RX_IFG = 0;
			return;
	}
}
