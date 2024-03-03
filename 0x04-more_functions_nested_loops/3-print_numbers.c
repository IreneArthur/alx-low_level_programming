#include "main.h"
/**
 * print_numbers - Print numbers from 0 to 9 followed by a new line
 *
 * This function prints the numbers from 0 to 9 followed by a new line
 * to the standard output using the _putchar function. Each number is
 * printed as a character.
 */
void print_numbers(void)
{
	int i = 0;

	for(i = 0; i <=  9; i++)
	{
		_putchar('0' + i);
	}
	_putchar('\n');
}
