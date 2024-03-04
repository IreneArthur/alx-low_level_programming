#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcpy - Copies the string pointed to by src to the buffer pointed to dest
 * @dest: Pointer to the destination buffer
 * @src: Pointer to the source string
 *
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
