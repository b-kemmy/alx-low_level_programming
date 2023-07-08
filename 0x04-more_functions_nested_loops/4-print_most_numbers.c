#include "main.h"

/**
*print_most_numbers - Prints numbers except 2 and 4
*
*Return: Always 0 (Success)
*/

void print_most_numbers(void)
{
	int number;
	for (number = 48; number < 58; number++)
	{
		if ((number == 50) || (number == 52))
		{
			continue;
		}
		_putchar(number);
	}
	_putchar(10);
}
