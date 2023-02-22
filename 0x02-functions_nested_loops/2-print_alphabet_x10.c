#include "main.h"
/**
 * print_alphabet_x10 - entry point
 * Description - prints all alphabet, in lowercase, followed by a new line
 * Return: Always 0 (success)
 */
void print_alphabet_x10(void)
{
	char l;
	int i = 0;

	while (i < 10)
	{
		for (l = 'a'; l <= 'z'; l++)
		{
			_putchar(l);
		}
		_putchar('\n');
		i++;
	}
}
