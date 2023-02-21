#include "main.h"
/**
 * print_alphabet - entry point
 * Description - prints all alphabet, in lowercase, followed by a new line
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		_putchar(l);
	}
	_putchar('\n');
}
