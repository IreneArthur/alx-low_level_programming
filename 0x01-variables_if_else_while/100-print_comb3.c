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
		int b = a + 1;

		while (b < 10)
		{
		putchar('0' + a);
		putchar('0' + b);

		if (!(a == 9 && b == 9) && !(a == 8 && b == 9))
		{
		putchar(',');
		putchar(' ');
		}
		b++;
		}

		a++;
	}

	return (0);
}
