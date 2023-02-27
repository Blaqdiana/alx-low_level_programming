#include "main.h"

/**
 * swap_int - swaps integers a ans b.
 * @a: declaration of a and paramters for the function swap_int
 * @b: declaration of b and paramters for the function swap_int
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int i = *a;
	int j = *b;

	*a = j;
	*b = i;
}
