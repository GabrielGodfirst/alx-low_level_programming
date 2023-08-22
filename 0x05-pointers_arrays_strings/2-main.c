#include "main.h"
#include <stdio.h>

/**
 * main - Entry point of the program
 * Return: A;ways return nothing.
 */

int main(void)

{
char *str;
int len;

str = "My first strlen!";
len = _strlen(str);
printf("%d\n", len);
return (0);
}
