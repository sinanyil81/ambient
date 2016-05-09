/*
 * packet.h
 *
 *  Created on: May 4, 2016
 *      Author: sinanyil81
 */

#ifndef MAC_PACKET_H_
#define MAC_PACKET_H_

#define BPS_1

/*---------------------------------------------------
 * BITS PER SECOND definitions. BIT_LENGTH_32KHZ holds
 * the time duration of each individual bit according
 * to the 32KHz timer resolution.
 ---------------------------------------------------*/
#ifdef BPS_1
	#define BIT_LENGTH_32KHZ 31250
#elif defined BPS_100
	#define BIT_LENGTH_32KHZ 312
#endif


/*---------------------------------------------------
 * One byte Wake-Up bit stream for the MCU
 * 10101010 sequence
 ---------------------------------------------------*/
#define WAKE_UP 0xAA

/*---------------------------------------------------
 * Four byte Preamble
 ---------------------------------------------------*/
//#ifndef MAC_PACKET_PREAMBLE
//	#define PREAMBLE_LEN 4
//	uint8_t PREAMBLE[PREAMBLE_LEN] =  {0xAA,0xAA,0xAA,0xAA};
//#endif

#endif /* MAC_PACKET_H_ */
