#include "main.h"
#include <string.h>
/**
 * _strcat - Concatenates the source string (src) to the destination string
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 *
 * Return: Pointer to the modified destination string (dest)
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
