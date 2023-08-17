#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to the standard output
 * @c: The character to be printed
 * Return: on success 1
 * on error, -1nis returned
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
