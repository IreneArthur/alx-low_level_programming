#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts_half - Prints the second half of a string
 * @str: Pointer to the string
 *
 * This function takes a pointer to a string `str` as its parameter.calculates
 * the length of the string and then prints the second half of the string to th
 * standard output. If the length of the string is even, it starts printing fro
 * the middle character onwards. If the length of the string is odd, it starts
 * printing from the character after the middle character onwards.
 */
void puts_half(char *str)
{
	int length = strlen(str);
	int i;

	if (length % 2 == 0)
	{
		for (i = length / 2; i < length; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = (length - 1) / 2; i < length; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
