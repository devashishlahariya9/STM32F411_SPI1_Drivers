#include "STM32F411xx_Nokia5110.h"

Nokia5110 lcd;

int main(void)
{
	lcd.init();

	lcd.setCursor(0, 0);
	lcd.print("Devashish :)");

	lcd.display();

	while(1)
	{

	}

	return 0;
}
