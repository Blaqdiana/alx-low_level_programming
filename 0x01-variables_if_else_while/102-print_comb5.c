#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;
	int i;
	int n;
	int c;

	for (a = 48; a <= 57; a++)
	{
		for (i = 48; i <= 57; i++)
		{
			for (n = 48; n <= 57; n++)
			{
				for (c = 48; c <= 57; c++)
				{
				if (((n + c) > (a + i) &&  n >= a) || a < n)
				{
					putchar(a);
					putchar(i);
					putchar(' ');
					putchar(n);
					putchar(c);

					if (a + i + n + c == 227 && a == 57)
					{
					break;
					}
					else
					{
					putchar(',');
					putchar(' ');
					}
				}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
