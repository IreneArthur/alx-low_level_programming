#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - this is the main
 *
 * Return: zero when succedded
*/
void positive_or_negative(int n)
{
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
}
