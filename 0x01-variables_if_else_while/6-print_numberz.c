#include <stdlib.h>
#include <time.h>
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
		a++;
	}
	putchar('\n');
	return (0);
}
