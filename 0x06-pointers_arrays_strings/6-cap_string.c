#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
char *cap_string(char *str)
{
	int c, i, j;

	char chr[] = {' ', ',', ';', '.', '!',
			'?', '"', '(', ')', '{', '}', '\t', '\n', '\0'};

	c = 32;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - c;

	c = 0;

	for (j = 0; chr[j] != '\0'; j++)
	{
		if (chr[j] == str[i])
		{
			c = 32;
			break;
		}
	}
	}
	return (str);
}

