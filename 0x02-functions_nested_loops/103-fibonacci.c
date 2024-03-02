#include "main.h"
#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * This program calculates the sum of all even Fibonacci numbers
 * up to 4,000,000 and prints the result.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	long int a = 1, b = 2, c;
	long int sum;

	while (c <= 4000000)
	{
		c = a + b;
		a = b;
		b = c;
		if (c % 2 == 0)
		{
			sum += c;
		}
	}
	printf("%ld\n", sum);
	return (0);

}
