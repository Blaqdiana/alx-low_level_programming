#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of the function.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	char *opc = (char *) main;
	int i, bt;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bt = atoi(argv[1]);

	if (bt < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < bt; i++)
	{
		printf("%02x", opc[i] & 0xFF);
		if (i != bt - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
