#include "main.h"

/**
  * print_line - draws a straight line
  * @n: the number of times _ will be printed
  *
  * Return: void
  */
void print_line(int n)
{
	int lines;

	for (lines = 0; lines < n; lines++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
