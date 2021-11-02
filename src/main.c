#include "STM32F411xx_SPI1.h"

#define spi_ss 6

int main(void)
{
	spi1_init(spi_ss, SPI_MASTER_MODE, SPI_MODE_0, SPI_CLK_DIV_BY_4);

	spi1_beginTransmission();
	spi1_write('D');
	spi1_endTransmission();

	while(1)
	{

	}
	return 0;
}
