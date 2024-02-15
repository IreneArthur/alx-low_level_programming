#include <stdio.h>
/**
 * main - this is the main
 *
 * Return: zero when succedded
*/

int main(void)
{
	char sky = 'a';
	char big = 'A';

	while (sky <= 'z')
	{
		putchar(sky);
		sky++;
	}
	while (big <= 'Z')
	{
		putchar(big);
		big++;
	}
	putchar('\n');
	return (0);
}
