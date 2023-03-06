#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: The string to be searched.
 * @c: The character to search for.
 *
 * Return: cis found - a pointer to the first occurence.
 * If c is not found - NULL.
 */
char *_strchr(char *s, char c)
{
	int i;
	char *null = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}
	if (*(s + i) == c)
	{
		return (s + i);
	}
	else
	{
		return (null);
	}
}
