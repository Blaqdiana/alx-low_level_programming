#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 *
 * @n: number to get the factorial of.
 *
 * Return: -1 when n is less than 0
 *         else, n factorial.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (n);
	}
	else
	{
		return (n * (factorial(n - 1)));
	}
}
