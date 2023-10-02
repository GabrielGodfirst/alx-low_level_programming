#include "main.h"

/**
 * get_bit - the value of multiple of an index is returned
 * @n: digit searched
 * @index: position index of a bit
 * Return: bit value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);
	bit_val = (n >> index) & 1;
	return (bit_val);
}
