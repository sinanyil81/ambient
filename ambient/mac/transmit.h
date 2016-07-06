/*
 * transmit.h
 *
 *  Created on: May 5, 2016
 *      Author: sinanyil81
 */

#ifndef MAC_TRANSMIT_H_
#define MAC_TRANSMIT_H_

/*---------------------------------------------------
 * 1-0 Modulation utilities
 ---------------------------------------------------*/
#define tx_off() TX_OUT &= ~TX_PIN;
#define tx_on() TX_OUT |= TX_PIN;
#define tx_toggle() TX_OUT ^= TX_PIN;

/* Transmits given data using FM0 encoding scheme. */
void transmit(uint8_t *data,uint16_t numBytes);

#endif /* MAC_TRANSMIT_H_ */
