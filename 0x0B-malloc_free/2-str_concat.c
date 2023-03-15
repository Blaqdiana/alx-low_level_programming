#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 *
 *@s1: String one.
 *@s2: string two.
 *
 * Return: Pointer or NULL.
 */
char *str_concat(char *s1, char *s2)
{
	char *new_str;
	int i = 0, j = 0, len = 0;

	while (s1 && *(s1 + i))
	{
		len++;
		i++;
	}
	i = 0;
	while (s2 && *(s2 + i))
	{
		len++;
		i++;
	}
	i = 0;
	len += 1;
	new_str = (char *) malloc(len);
	if (!new_str)
		return (NULL);
	while (s1 && *(s1 + i))
	{
		*(new_str + j) = *(s1 + i);
		i++;
		j++;
	}
	i = 0;
	while (s2 && *(s2 + i))
	{
		*(new_str + j) = *(s2 + i);
		i++;
		j++;
	}
	*(new_str + j) = '\0';
	return (new_str);
}
