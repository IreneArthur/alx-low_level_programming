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
			int  c = b + 1;

			while (c < 10)
			{
				putchar('0' + a);
				putchar('0' + b);
				putchar('0' + c);

			if (!(a == 7 && b == 8 && c == 9))
			{
				putchar(',');
				putchar(' ');
			}
			c++;
			}
			b++;
		}

		a++;
	}

	return (0);
}
