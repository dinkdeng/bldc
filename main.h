/*
	Copyright 2012-2014 Benjamin Vedder	benjamin@vedder.se

	This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
    */

/*
 * main.h
 *
 *  Created on: 10 jul 2012
 *      Author: BenjaminVe
 */

#ifndef MAIN_H_
#define MAIN_H_

#include <stdint.h>

// Settings
#define USE_SERVO_INPUT			0
#define USE_SERVO_OUTPUT		0
#define USE_THROTTLE_ADC		0
#define AUTO_PRINT_FAULTS		0

// Function prototypes
void main_dma_adc_handler(void);
float main_get_last_adc_isr_duration(void);
void main_process_packet(unsigned char *data, unsigned char len);

#endif /* MAIN_H_ */
