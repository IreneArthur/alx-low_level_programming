#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - Print every minute of the day
 *
 * Description: This function prints every minute of a day in the format HH:MM.
 */
void jack_bauer(void)
{
	int a = 0;

	while (a < 24)
	{
		int b = 0;

		while (b < 60)
		{
			printf("%02d:", a);
			printf("%02d\n", b);
			b++;
		}
		a++;
	}
}
