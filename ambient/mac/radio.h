/*
 * hardware.h
 *
 *  Created on: May 4, 2016
 *      Author: sinanyil81
 */

#ifndef MAC_RADIO_H_
#define MAC_RADIO_H_

/*---------------------------------------------------
 * Port Definitions for playing with the antenna
 * impedance.
 * P2.7 for TX
 * P2.3 for RX
 ---------------------------------------------------*/
//#define TX_PIN BIT7
//#define TX_OUT P2OUT
//#define TX_DIR P2DIR

#define TX_PIN BIT0
#define TX_OUT P4OUT
#define TX_DIR P4DIR

// RX= P1.1 for debug purposes
#define RX_PIN BIT1
#define RX_OUT P1OUT
#define RX_REN P1REN
#define RX_IN P1IN
#define RX_DIR P1DIR
#define RX_IES P1IES
#define RX_IFG  P1IFG
#define RX_IE P1IE

#define RX_VECTOR PORT1_VECTOR


/* Initialize the communication hardware */
void radio_init();

#endif /* MAC_RADIO_H_ */
