#include <stdio.h>
/**
 * main - this is the main
 *
 * Return: zero when succedded
*/

int main(void)
{
	int sky = 0;
	char big = 'a';

	while (sky < 10)
	{
		putchar('0' + sky);
		sky++;
	}
	while (big <= 'f')
	{
		putchar(big);
		big++;
	}
	putchar('\n');
	return (0);
}
