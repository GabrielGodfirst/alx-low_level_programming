#include "main.h"

/**
 * _isdigit - checks if anumber is are 0 - 9
 * @c: char to be checked
 * Return: 0 0r 1
 */

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
	return (1);
else
	return (0);
}
