#include "main.h"

/**
 * print_times_table - Prints times tables for n times
 *
 * @n: int to print n times table
 * Return: void
 */
void print_times_table(int n)
{
	int a;
	int b;

	if (n <= 15 && n >= 0)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				int c = b * a;

				if (b == 0)
				{
					_putchar('0');
				} else if (c <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + c);
				} else if (c > 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar('0' + (c / 100));
					_putchar('0' + ((c / 10) % 10));
					_putchar('0' + (c % 10));
				} else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + (c / 10));
					_putchar('0' + (c % 10));
				}
			}
			_putchar('\n');
		}
	}
}
