#include <stdio.h>
/**
 * main - main block
 * Description: computes and prints even  number < 4,000,000
 * 5 below 1024 (excluded), followed by a new line
 * Return: 0
 */
int main(void)
{
	int i = 0;
	long int a = 1;
	long int b = a;
	long int c = 0;

	while (c < 4000000)
	{
		if (c % 2 == 0)
		{
			i += c;
		}
		a = b;
		b = c;
		c = a + b;
	}
	printf("%d\n", i);
	return (0);
}
