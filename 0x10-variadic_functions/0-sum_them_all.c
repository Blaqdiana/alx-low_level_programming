#include <stdarg.h>
#include "variadic_functions.h"

/**
  * sum_them_all - Sum of all its parameters
  *
  *@n: integer
  * Return: Sum of arguments or 0
  */
int sum_them_all(const unsigned int n, ...)
{
		va_list valist;
		int sum = 0;
		unsigned int i;

		va_start(valist, n);
		for (i = 0; i < n; i++)
			sum = sum + va_arg(valist, int);
		va_end(valist);
		if (n == 0)
			return (0);
		else
			return (sum);
}
