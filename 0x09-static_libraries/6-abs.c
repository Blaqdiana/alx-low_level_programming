#include "main.h"

/**
 * _abs - main function
 * Description: computes the absolute value of an integer
 * @n: integer to make absolute
 * Return: int
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
