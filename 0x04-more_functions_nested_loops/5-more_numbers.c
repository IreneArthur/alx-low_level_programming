#include "main.h"
#include <stdio.h>
/**
 * more_numbers - Print numbers from 0 to 14 ten times
 *
 * This function prints the numbers from 0 to 14 ten times to the standard
 * output using the _putchar function. Each number is printed as a character,
 * and each set of numbers is followed by a newline character.
 */
void more_numbers(void)
{
	int i = 0, j;

	while (i <= 10)
	{
		j = 0;
		while (j <= 14)
		{
			if (j > 9)
			{
				_putchar('0' + (j / 10));
			}
			_putchar('0' + (j % 10));
			j++;
		}
		_putchar('\n');
		i++;
	}
}
