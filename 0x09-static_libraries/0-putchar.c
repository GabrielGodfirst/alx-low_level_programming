#include <unstd.h>

/**
 * _putchar - writes the character of c to the standard output
 * @c: the character to print
 * Return: on success 1
 * on error: -1, 
 */  int _putchar(char c)
{
	return (write(1, &c, 1));
}
