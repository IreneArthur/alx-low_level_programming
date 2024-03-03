#include "main.h"
/**
 * print_line - Print a line of underscores
 * @n: Number of underscores to print
 */


void print_line(int n)
{
	int i = 1;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');

	}
	_putchar('\n');
}
