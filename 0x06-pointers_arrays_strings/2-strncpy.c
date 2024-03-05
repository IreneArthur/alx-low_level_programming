#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncpy - Copies at most n characters from the string src to the
 *            destination string dest.
 *
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 * @n: Maximum number of characters to be copied from src
 *
 * Return: Pointer to the destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
