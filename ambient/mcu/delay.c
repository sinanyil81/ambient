#include "mcu.h"

/*---------------------------------------------------
 * Timer that puts MCU to low power mode 3 for given
 * number of ticks in 32KHz and then suspends operation
 ---------------------------------------------------*/
void mcu_delay(uint16_t ticks32KHz)
{
    TA2CCTL0 = CCIE;
    TA2CCR0 = ticks32KHz;
    TA2CTL = TASSEL_1 | MC_1 | TACLR;

    /* Put MCU to low-power operation mode 3 and wait for
     * timer interrupt.
     */
    __bis_SR_register(LPM3_bits | GIE);

    TA2CCTL0 = 0x00;
    TA2CTL = 0;
}


#pragma vector=TIMER2_A0_VECTOR
__interrupt void INT_Timer2A0(void)
{
	__bic_SR_register_on_exit(LPM3_bits);
}


