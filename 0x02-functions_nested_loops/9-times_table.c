#include <stdio.h>
#include "main.h"
/**
 * times_table - Print the times table up to 9x9
 */
void times_table(void)
{
	int a = 0;

	while (a <= 9)
	{
		int b = 0;

		while (b <= 9)
		{
		int c = a * b;

		printf("%d", c);
		if (b < 9)
		{
			printf(", ");
		}
		if (c < 10)
		{
			printf(" ");
		}
		b++;
		}
	printf("\n");
	a++;
	}
}
