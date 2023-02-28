#include "main.h"

/**
 * puts2 - prints character of a string.
 * @str: the used string reference.
 *
 * Return: 0
 */
void puts2(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		_putchar(*(str + i));
		if (*(str + i + 1) != '\0')
			i++;
	}
	_putchar('\n');
}
