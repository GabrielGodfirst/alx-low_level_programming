#include "main.h"

/**
 * _puts - prints a strig
 * @str: the string to print
 * Return: Always return nothing void.
 */

void _puts(char *str)
{
for (; *str != '\0'; str++)
{
_putchar(*str);
}
_putchar('\n');
}
