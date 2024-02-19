#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - prints the last ligit of inputed number
 * @n: number to be checked
 *
 * Return: Absolute value of the number
*/
int print_last_digit(int n)
{
	int last_digit = n%10;

	if (n < 0)
	last_digit = -last_digit;
	_putchar('0' + last_digit);
	return (last_digit);
}
