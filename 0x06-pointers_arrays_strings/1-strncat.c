#include "main.h"
#include <string.h>
/**
 * _strncat - Concatenates the source string (src) to the destination string
 *            up to n characters from src.
 *
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 * @n: Maximum number of characters to concatenate from src
 *
 * Return: Pointer to the modified destination string (dest)
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
