#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Function that prints numbers, followed by a new line
 *
 * @separator: comma space
 * @n: elements to be printed
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(valist, int));
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
