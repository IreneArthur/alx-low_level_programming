#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * print_sign - Prints the sign of a number and returns its sign.
 * @n: The number to check
 *
 * Description: This function prints the sign of the number 'n' and returns
 *              its sign as follows:
 *                  - Returns 1 and prints '+' if n is greater than zero.
 *                  - Returns 0 and prints '0' if n is zero.
 *                  - Returns -1 and prints '-' if n is less than zero.
 *
 * Return: 1 if 'n' is greater than zero, 0 if 'n' is zero, -1 if 'n' is
 *         less than zero.
 */
int print_sign(int n)
{
    if (n > 0)
    {
        _putchar('+');
	return (1);
    }
    else if (n < 0)
    {
        _putchar('-');
	return (-1);
    }
    else
    {
        _putchar('0');
	return (0);
    }
    printf("%d\n", n);
}
