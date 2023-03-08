#include "main.h"

/**
 * _sqrt - Finds the square root of two numbers
 *
 * @i: The number to find the square root
 * @n: The number to test for the square root of @i
 *
 * Return: value of square root
 */
int _sqrt(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (_sqrt(n, i + 1));
	}
}

/**
 * _sqrt_recursion - Returns the natural square root
 *
 * @n: Integer square root to return
 *
 * Return: Natural square root of n
 *	if not return -1
 */
int _sqrt_recursion(int n)
{int root = 0;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}

	return (_sqrt(n, root));
}
