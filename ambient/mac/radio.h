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
#define TX_PIN BIT7
#define TX_OUT P2OUT
#define TX_DIR P2DIR

#define RX_PIN BIT2
#define RX_IN P2IN
#define RX_DIR P2DIR
#define RX_IES P2IES
#define RX_IFG  P2IFG
#define RX_IE P2IE

#define RX_VECTOR PORT2_VECTOR


/* Initialize the communication hardware */
void radio_init();

#endif /* MAC_RADIO_H_ */
