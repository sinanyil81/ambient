#include "mcu.h"

#ifndef MCU_DELAY_H_
#define MCU_DELAY_H_

/* Creates a delay of given length in 32KHz ticks and suspends MCU to
 * low power mode 3 during that period */
void mcu_delay(uint16_t ticks32KHz);

#endif /* MCU_TIMER_H_ */
