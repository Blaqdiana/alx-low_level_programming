#include "main.h"
#include <stdio.h>

/**
 * _atoi - convert a string to an integer.
 * @s: the string to be comverted.
 *
 *Return: The integer value of the comverted string.
 */
int _atoi(char *s)
{
	unsigned int num = 0;
	int flag = -1, i = 0, neg = 1;

	if (*s == '\0')
		flag = 1;
	for (i = 0; flag == -1; i++)
	{
		if ((*(s + i) >= '0') && (*(s + i) <= '9'))
		{
			if (num != 0)
				num = ((num * 10) + (*(s + i) - '0'));
			else
				num = (*(s + i) - '0');
		}
		if (*(s + i + 1) == '\0')
			flag = 1;
		if (*(s + i) == '-')
			neg *= -1;
		if (num != 0)
		{
			if ((*(s + i + 1) < '0') || (*(s + i + 1) > '9'))
				flag = 0;
		}
	}
	return (neg * num);
}
