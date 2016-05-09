#include "app.h"

static uint8_t data[4] =  {0xAA,0xAA,0xAA,0xAA};

void application_loop(){
    transmit(data,4);

    /* Transition to LPM3 */
    __bis_SR_register(LPM3_bits | GIE);
}

