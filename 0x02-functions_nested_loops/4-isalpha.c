#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * _isalpha - Return 1 the variable is a character and 0 otherwise
 * @c: variable to check
 * Return: 1 if c is a letter, 0 otherwise
*/
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
