#include "main.h"

/**
 * find_prime - checks if int is divisible by j.
 *
 * @i: integer to be checked.
 * @j: checks if integer is divisible.
 *
 * Return: 1
 */
int find_prime(int i, int j)
{
	if (j < 2)

		return (0);

	if (j % i == 0)

		return (0);

	if (i > j / 2)

		return (1);

	return (find_prime(i + 1, j));

}

/**
 * is_prime_number - Checks if n is prime.
 *
 * @n: Number to be checked.
 *
 * Return: 1 if prime, else 0
 */
int is_prime_number(int n)
{
	if (n == 2)

		return (1);

	return (find_prime(2, n));

}
