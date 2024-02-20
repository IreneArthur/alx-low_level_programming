#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This program calculates the sum of all numbers less than 1024
 *              that are multiples of 3 or 5 and prints both the numbers and
 *              their sum.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 0;
	int sum = 0;

	while (a < 1024)
	{
		if (a % 3 == 0 || a % 5 == 0)
		{
			sum += a;
		}
		a++;
	}
	printf("%d\n", sum);
	return (0);
}
