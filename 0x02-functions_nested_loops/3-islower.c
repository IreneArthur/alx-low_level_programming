#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * _islower - Return 1 when the character is lowercase and 0 otherwise
 * @c: The character to check
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
