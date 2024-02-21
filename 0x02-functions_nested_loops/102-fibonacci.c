#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * This function prints the first 50 terms of the Fibonacci sequence.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int a = 1;
	long int b = 2;
	long int c;
	int i;

	printf("%ld, %ld, ", a, b);
	for (i = 2; i < 50; i++)
	{
		c = a + b;
		printf("%ld", c);
		if (i < 49)
		{
			printf(", ");
		}
		a = b;
		b = c;
	}
	return (0);
}
