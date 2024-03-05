#include "main.h"
#include <string.h>
/*
 * Concatenates the source string (src) to the destination string (dest).
 * This function overwrites the terminating null byte ('\0')
 * at the end of dest with the first character of src,
 * and then adds a null-terminator at the end of the concatenated string.
 * The behavior is undefined if the destination array is not large enough
 * for the contents of both src and dest and the null-terminator.
 * Returns a pointer to the resulting string (dest).
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
