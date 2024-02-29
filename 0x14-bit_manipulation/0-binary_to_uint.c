#include <stdio.h>
#include "main.h"
/*
 * binary_to_uint -converts a binary to unsigned integer.
 *
 * b: A pointer to a string containing binary digits (0s and 1s).
 *
 * returns: The converted unsigned integer, or 0 if:
 *          - There is one or more char in the str `b` that is not '0' or '1'.
 *          - `b` is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);
		result = (result << 1) + (*b - '0');
		b++;
	}

	return (result);
}
