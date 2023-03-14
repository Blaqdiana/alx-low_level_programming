#include "main.h"
#include <stdlib.h>

/**
 * create_array -Creates an array of char.
 *
 * @size: Size of the array.
 * @c: char to initialize the array.
 *
 * Return: Pointer or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *arry;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	arry = malloc(sizeof(char) * size);
	if (arry == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arry[i] = c;
	}

	return (arry);
	free(arry);
}
