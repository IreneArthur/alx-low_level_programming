#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strcmp - Compares two strings.
 *
 * @s1: Pointer to the first string
 * @s2: Pointer to the second string
 *
 * Return: An integer less than, equal to, or greater than zero if s1 is found,
 * respectively, to be less than, to match, or be greater than s2.
 */

int _strcmp(char *s1, char *s2)
{
	int result = strcmp(s1, s2);
	return (result);
}
