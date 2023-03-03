#include "main.h"

/**
* print_number - prints an integer
* @n:integer to be printed
* Return: void
*/
void print_number(int n)
{

	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}
	else
		num = n;
	if (num <= 9)
	{
		_putchar(num + '0');
	return;
	}
	print_number(num / 10);
	print_number(num % 10);
}
