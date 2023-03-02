#include "main.h"

/**
 * _strncat -nconcatenates two strings.
 * @dest: string to concat.
 * @src: string to concat.
 * @n: max num of character to append from src
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int o;
	int p;

	for (o = 0; dest[o] != '\0'; o++)
		;
	p = 0;

	while (src[p] != '\0' && p < n)
	{
		dest[o] = src[p];
		o++;
		p++;
	}
	return (dest);
}
