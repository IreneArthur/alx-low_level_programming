#include <stdio.h>
#include "main.h"
void print_times_table(int n)
{
	if (n >= 0 && n <= 15 )
	{
		int i = 0;

		while (i <= n)
		{
			int j = 0;

			while (j <= n)
			{
				int m = i * j;

				if (i*j+1 < 10)
				{
					printf("  ");
				}
				else if (i*j+1 < 100)
				{
					printf(" ");
				}
				printf("%d", m);
				if (j != n)
				{
					printf(", ");
				}
				j++;
			}
			i++;
			printf("\n");
		}
	}
}
