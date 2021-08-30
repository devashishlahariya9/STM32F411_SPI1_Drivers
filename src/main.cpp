#include "STM32F411VE.h"
#include "STM32F411VE_SPI1.h"

SPI_1 spi1;

int main()
{
	spi1.init();		//By default it will work at 4MHz if the Microcontroller is using 16Mhz Clock

	spi1.write('D');	//Write 'D'
}
