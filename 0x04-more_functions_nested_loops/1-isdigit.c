#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * _isadigit-check if the character is a digit
 * @c-character to be checked
 *
 * Return: 1 iff it is did
 * git otherwise 0
*/

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	return (0);
}
