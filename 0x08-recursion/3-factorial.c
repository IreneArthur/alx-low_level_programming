#include "main.h"
/**
 * factorial - calculates the factorial
 * @n: number to calculate the factorial
 * Return: Factorial of @n
*/
int factorial(int n)
{
	if (n == 1 || n == 0)
	{
		return (0);
	}
	return (n * factorial(n - 1));
}
