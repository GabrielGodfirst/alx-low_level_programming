#include "main.h"
/**
 * get_endianness - endianness checks
 * Return: o for big, 1 for small
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
