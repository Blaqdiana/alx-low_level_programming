#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @str: The string to be encoded.
 *
 * Return: str
 */
char *rot13(char *str)
{
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0;
	int j;

	while (*(str + i) != '\0')
	{
		for (j = 0; j <= 51; j++)
		{
			if (*(str + i) == a[j])
			{
				*(str + i) = rot13[j];
				break;
			}
		}
		i++;
	}
	return (str);
}
