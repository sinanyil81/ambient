#include "mcu.h"

void mcu_init(){
    WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer

    /*
     * Disable the GPIO power-on default high-impedance mode
     * to activate previously configured port settings.
     */
    	PM5CTL0 &= ~LOCKLPM5;		// Lock LPM5.

    	/* Initialize on board leds. */
    led_init(LED1);
    led_init(LED2);
}


