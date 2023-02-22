#include <stdio.h>

/**
 * numLength - prints the first 98 fibonacci numbers
 * starting with 1 and 2
 * Return: void
 */

int main(void)
{
	int a = 1, b = 2, c, i;

	printf("%d, %d, ", a, b);

	for (i = 2; i < 98; i++)
	{
		c = a + b;
		printf("%d", c);
	if (i < 97)
	{
		printf(", ");
	}
	a = b;
	b = c;
	}

	printf("\n");
	return (0);
}
