#include "main.h"
#include <stdio.h>

/**
  * main - the entry point of the program
  * @argc: the number of arguments
  * @argv: an  array of arguments
  *
  * Return: 0
  */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
