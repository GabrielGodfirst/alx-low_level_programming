#include "main.h"

/**
 * flip_bits - includes the number to count
 * @n: starting number
 * @m: the number that follows
 *
 * Return: number bit change
 */


unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int exclusive = n ^ m;
	unsigned long int current;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
