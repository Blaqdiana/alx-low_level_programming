#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int i;
	int n;

	for (a = '0'; a <= '9'; a++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			for (n = '0'; n <= '9'; n++)
			{
				if (a < i && i < n)
				{
					putchar(a);
					putchar(i);
					putchar(n);

					if (a != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
