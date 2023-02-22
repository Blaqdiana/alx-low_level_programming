#include "main.h"
/**
 * _islower - entry point
 * Description - checks if a character is lowercase
 * @c: given character to check for lowercase
 * Return: 1 if true, 0 if false.
 */
int _islower(int c)
{
	int lc;
	{
		for (lc = 'a'; lc <= 'z'; lc++)
		if (c == lc)
		{
			return (1);
		}
	}
	return (0);
}
