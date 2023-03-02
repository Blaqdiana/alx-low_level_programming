#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: first character to compare.
 * @s2: second character to compare
 *
 * Return: 0 if s1 == s2
 * 	return another number if s1 < s2.
 */
int _strcmp(char *s1, char *s2)
{
	int c = 0;

	while (s1[c] - s2[c] == 0 && s1[c] != '\0')
	{
		c++;
	}
	return (s1[c] - s2[c]);
}
