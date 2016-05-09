#include "mac.h"

#pragma vector=RX_VECTOR
__interrupt void INT_Port1(void) {
	switch(RX_IFG&RX_PIN)
	{
		case RX_PIN:
			RX_IFG &=RX_PIN;  // clear the interrupt flag
			// toggle rising to falling edge to detect transitions
			// wake-up()
			// receive bits...
			return;

		default:
			RX_IFG = 0;
			return;
	}
}
