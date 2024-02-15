#include <stdio.h>
/**
 * main - this is the main
 *
 * Return: zero when succedded
*/

int main(void)
{
	char sky =  'a';

	while (sky <= 'z')
	{
		if (sky != 'q' && sky != 'e')
		{
		putchar(sky);
		}
		sky++;
	}
	putchar('\n');
	return (0);
}
