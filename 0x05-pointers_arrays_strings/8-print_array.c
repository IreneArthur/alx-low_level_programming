#include "main.h"
#include <stdio.h>
/**
 * print_array - Prints elements of an array of integers
 * @a: Pointer to the array
 * @n: Number of elements to print
 *
 * This function takes an array of integers and the number of elements to prin
 * It prints each element of the array followed by a comma and a space, except
 * the last element. It does not print a newline character.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}
