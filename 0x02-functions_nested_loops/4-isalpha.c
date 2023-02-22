#include "main.h"
/**
 * _isalpha - checks for an alphabetical character.
 * @c:character to check if character is alphabet.
 * Return:0-if lowercase,1-if not.
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
