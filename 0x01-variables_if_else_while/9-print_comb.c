#include <stdio.h>
/**
 * main - this is the main
 *
 * Return: zero when succedded
*/

int main(void)
{
	int a = 0;

	while (a < 10)
	{
		putchar('0' + a);
		if (a < 9)
		{
		putchar(',');
		putchar('\t');
		}
		a++;
	}

	return (0);
}
