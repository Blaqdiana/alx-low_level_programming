#include "main.h"
/**
 * print_rev - prints a string in reverse.
 *
 * @s: string to print
 */
void rev_string(char *s)
{
	{
	int i, k;
	char q;

	i = 0;
	while (*(s + i) != '\0')
		i++;
	for (k = 1; k <= (i / 2); k++)
	{
		q = *(s + i - k);
		*(s + i - k) = *(s + (k - 1));
		*(s + (k - 1)) = q;
	}
}
}
