#include "main.h"
/**
 * print_rev - prints a string in reverse.
 *
 * @s: string to print
 */
void print_rev(char *s)
{
	int l = 0;

	while (s[l])
	{
		l++;
	}
	while (l--)
		_putchar(s[l]);
	_putchar('\n');
}
