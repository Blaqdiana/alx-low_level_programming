#include "main.h"

/**
 * print_sign - prints the sign and returns number to represent sign.
 *
 * @n: integer that you are testing sign of
 * Return: 1 if positive, 0 if zero, and -1 if negative.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
