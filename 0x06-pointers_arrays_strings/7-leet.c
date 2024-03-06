#include "main.h"
#include <stdio.h>
/**
 * leet - Encodes a string into 1337.
 * @str: Pointer to the string to be encoded.
 *
 * Return: Pointer to the encoded string.
 */
char *leet(char *str)
{
	char *letters = "aAeEoOtTlL";
	char *replacement = "4433007711";
	int i = 0;
	int j;

	while (str[i] != '\0')
	{
		j = 0;
		while (letters[j] != '\0')
		{
			if (str[i] == letters[j])
			{
				str[i] = replacement[j];
			}
			j++;
		}
		i++;
	}
	return (str);



}
