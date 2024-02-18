#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * _islower - Return 1 when the character is lower and o else
 *
 * Return 1 on succes o else
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
