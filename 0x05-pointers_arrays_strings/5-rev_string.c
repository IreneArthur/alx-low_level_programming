#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * rev_string - Reverses a string
 * @s: The string to be reversed
 */

void rev_string(char *s)
{
	int leng = strlen(s);
	char b;
	int i;

	for (i = 0; i <= leng / 2; i++)
	{
		b = s[i];
		s[i] = s[leng - i - 1];
		s[leng - i - 1] = b;
	}
}
