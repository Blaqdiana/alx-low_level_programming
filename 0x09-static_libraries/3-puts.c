#include "main.h"

/**
 * _puts - prints a string and new line.
 *
 * @str: string to print
 * Return: void
 */
void _puts(char *str)
{
	int l = 0;

	while (str[l])
	{
		_putchar(str[l]);
		l++;
	}
	_putchar('\n');
}
