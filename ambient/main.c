#include <msp430.h>

#include "ambient.h"

int main(void) {

	/* Initialize MCU ports and other stuff...*/
	mcu_init();

    /* Initialize communication sub-system. */
    radio_init();

    _BIS_SR(GIE);

    /* Run the application.*/
    application_loop();

    while(1);

    /* Transition to LPM3 */
    __bis_SR_register(LPM3_bits | GIE);

	return 0;
}


