#include "main.h"
#include <ctype.h>
/**
 * cap_string - Capitalizes the first letter after certain delimiter characters.
 * @str: Pointer to the string to be modified.
 *
 * Return: Pointer to the modified string.
 */
char *cap_string(char *str)
{
	int i = 0;

	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = toupper(str[0]);
	}
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == ',' || str[i] == ';' || str[i] == '.' ||
		    str[i] == '!' || str[i] == '?' || str[i] == '"' || str[i] == '(' ||
		    str[i] == ')' || str[i] == '{' || str[i] == '}' || str[i] == '\n' ||
		    str[i] == '\t')
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] = toupper(str[i + 1]);
			}
		}
		i++;
	}
	return (str);
}
