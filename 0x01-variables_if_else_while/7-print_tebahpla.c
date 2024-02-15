#include <stdio.h>
/**
 * main - this is the main
 *
 * Return: zero when succedded
*/

int main(void)
{
	char sky = 'z';


	while (sky >= 'a')
	{
		putchar(sky);
		sky--;
	}

	putchar('\n');
	return (0);
}
