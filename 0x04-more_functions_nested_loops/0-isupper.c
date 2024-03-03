#include <stdio.h>
#include "main.h"
/**
 * _isupper-check if the character is in uppercase
 * @c-character to be checked
 *
 * Return: 1 iff it is uppercase otherwise 0
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z' )
	{
		return (1);
	}
	else
	return (0);
}
