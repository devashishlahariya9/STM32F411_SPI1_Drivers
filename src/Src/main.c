#include "STM32F411xx_SPI1.h"

#define spi_ss 6

int main(void)
{
	SPI1_init(spi_ss, SPI_MASTER_MODE, SPI_MODE_0, SPI_CLK_DIV_BY_4);

	SPI1_beginTransmission();
	SPI1_write('D');
	SPI1_endTransmission();

	while(1)
	{

	}
	return 0;
}
