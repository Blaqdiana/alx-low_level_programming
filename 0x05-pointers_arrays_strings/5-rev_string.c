#include "main.h"
/**
 * rev_string - prints a string in reverse.
 *
 * @s: *s and function parameter string
 *
 * return: void
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
