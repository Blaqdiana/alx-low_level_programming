#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 *
 * @s: pointer to  string to be searched.
 * @accept: accepted bytes
 *
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
				break;
			}
		}
		if (s[j] == '\0')
			return (len);
	}
	return (len);
}
