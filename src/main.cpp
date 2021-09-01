/*
 * PORTB3 -> SCK
 * PORTB4 -> MISO
 * PORTB5 -> MOSI
 * PORTB6 -> SS (Can Be Selected According To The User's Needs By Simply Changing The #define Value In STM32F411xx_SPI1.h File)
 */

#include "STM32F411xx_SPI1.h"

SPI_1 spi1;

int main(void)
{
	spi1.init();		//Currently Only Supports SPI Mode 0 at 4MHz (16MHz MCU Clock)

	spi1.beginTransmission();	//Begins The Transmission
	spi1.write('D');			//Send Letter 'D'
	spi1.endTransmission();		//Ends The Transmission

    while(1)
    {

    }

    return 0;
}
