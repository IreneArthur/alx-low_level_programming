#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
 * string_toupper - Converts all lowercase characters in a string to uppercase.
 * @str: Pointer to the string to be converted.
 *
 * Return: Pointer to the modified string.
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (islower(str[i]))
		{
			str[i] = toupper(str[i]);
		}
		i++;
	}
	return (str);
}
