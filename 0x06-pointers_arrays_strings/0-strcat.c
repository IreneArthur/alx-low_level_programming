#include "main.h"
#include <string.h>
/*
 * _strcat-Concatenates the source string (src) to the destination string(dest)
 * The resulting string is terminated with a null character.
 * Returns a pointer to the modified destination string (dest).
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
