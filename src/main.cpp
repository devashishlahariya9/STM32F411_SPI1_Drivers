/*
 * PORTB3 -> SCK
 * PORTB4 -> MISO
 * PORTB5 -> MOSI
 * SS Pin Has To Selected By The User In The SPI_1 Constructor (Currently Limited To PORTB Only)
 * Constructor Syntax: SPI_1 <name> (SS_Pin, SPI_MODE, SPI_PRESCALAR);
*/

#include "STM32F411xx_SPI1.h"

SPI_1 spi1(6, SPI_MODE_3, CLK_DIV_BY_4);

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
