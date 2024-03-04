#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - Prints a string in reverse order
 * @s: The string to be printed in reverse
 *
 * This function takes a string @s as input and prints it in reverse order,
 * character by character, to the standard output.
 */

void print_rev(char *s)
{
	int leng = strlen(s);
	int i;

	for (i = leng - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}
