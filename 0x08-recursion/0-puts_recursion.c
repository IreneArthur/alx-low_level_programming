#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion - function like puts();
 * @s: input
 * Return: Always 0 (Success)
 */

void _puts_recursion(char *s)
 /* Base case: If the current character is '\0' (end of string), */
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
		}
	putchar(*s);
	_puts_recursion(s + 1);
}
