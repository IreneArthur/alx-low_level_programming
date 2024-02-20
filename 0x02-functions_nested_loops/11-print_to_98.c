#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Prints all natural numbers from n to 98.
 * @n: The starting number.
 *
 * Description: This function prints all natural numbers from the given
 *              starting number 'n' up to 98, inclusive, separated by commas.
 *              It handles both increasing and decreasing sequences correctly.
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
	while (n <= 98)
	{
		printf("%d", n);
		n++;
		if (n <= 98)
		{
			printf(", ");
		}
	}
	}
	else
	{
		while (n >= 98)
		{
		printf("%d", n);
		n--;
		if (n >= 98)
		{
			printf(", ");
		}
		}
	}
	printf("\n");
}
