#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - Print alphabets on ten lines
*/
void print_alphabet_x10(void)
{
	int size = 0;

	while (size < 10)
	{
	char all = 'a';

	while (all <= 'z')
	{
		_putchar(all);
		all++;
	}
	_putchar('\n');
	size++;
	}
}
