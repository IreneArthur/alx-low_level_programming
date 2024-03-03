#include "main.h"
/**
 * print_most_numbers - Print numbers from 0 to 9, excluding 2 and 4
 *
 * This function prints the numbers from 0 to 9, excluding 2 and 4,
 * to the standard output using the _putchar function. Each number is
 * printed as a character.
 */
void print_most_numbers(void)
{
	int i = 0;
	while (i <= 9)
	{
		if (!(i == 2 || i == 4))
		{
			_putchar('0' + i);
		}
		i++;
	}
}
