#include <string.h>
#include <STM32F411xx_SPI.h>

#define SPI_SS	 6

int main(void)
{
	char data[] = "Hello, World!!";

	GPIOB_CLK_ENABLE();
	SPI3_CLK_ENABLE();

	SPI_Init(SPI3, SPI3_USE_GPIOC, GPIOB, SPI_SS, SPI_MASTER_MODE, SPI_MODE_0, SPI_CLK_DIV_BY_4);

	SPI_BeginTransmission(SPI3, GPIOB, SPI_SS);
	SPI_WriteMulti(SPI3, (uint8_t*)&data, strlen(data));
	SPI_EndTransmission(SPI3, GPIOB, SPI_SS);

	while(1)
	{

	}
	return 0;
}
