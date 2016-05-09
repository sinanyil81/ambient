#include "mac.h"

/*---------------------------------------------------
 *  Transmission of a bit using FM0
 ---------------------------------------------------*/
#define send_1() 	\
			tx_toggle(); \
			led_toggle(LED1);	\
			mcu_delay(BIT_LENGTH_32KHZ);

#define send_0()		\
			tx_toggle(); \
			led_toggle(LED1); \
			mcu_delay(BIT_LENGTH_32KHZ>>1); \
			tx_toggle(); \
			led_toggle(LED1); \
			mcu_delay(BIT_LENGTH_32KHZ>>1);

/*---------------------------------------------------
 * Transmission of a Byte using FM0
 ---------------------------------------------------*/
void send_byte(uint8_t byte){
	uint8_t i;
	for(i=0;i<8;i++){
		if(byte & (0x01<<i)){
			send_1();
		}
		else {
			send_0();
		}
	}
}

/*---------------------------------------------------
 * Transmits given data using FM0 encoding
 ---------------------------------------------------*/
void transmit(uint8_t *data,uint16_t numBytes)
{
	int i = 0;

	if(numBytes == 0)
		return;

	tx_off();

	send_byte(WAKE_UP);

	for(i=0; i<numBytes; i++){
		send_byte(data[i]);
	}

	tx_off();
}




