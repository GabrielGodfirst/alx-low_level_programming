#include "main.h"

/**
 * actual_prime - calculates if a number is prime recursively
 * @n: number to be evaluated
 * @i: iterator
 * Return: 1 if n is prime, 0 if not
 */

int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 1)
		return (0);
	return (actual_prime(n, i - 1));
}

/**
 * is_prime_number - checks if an integer is prime or not
 * @n: number to be evaluated
 * Return: 1 if n is prime, or 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}
