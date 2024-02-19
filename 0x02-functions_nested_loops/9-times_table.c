#include <stdio.h>
#include "main.h"
/**
 *
*/
void times_table(void)
{
	int a = 0;

	while (a <= 9 )
	{
		int b = 0;
		while (b <= 9)
		{
		int c = a * b;

		printf("%d", c);
		if (b < 9)
		{
			printf(",\t");
		}
		b++;
		}
	printf("\n");
	a++;
	}
}
