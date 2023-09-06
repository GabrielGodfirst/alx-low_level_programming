#include <stdlib.h>

/**
 * create_array - craeates array of size size and assign
 * @size: size of an array
 * @c: char to assign
 * Description: create array of size sign and assign a char
 * Return: point to an array, fail if fail
 */

char *create_array(unsigned int size, char c)
{
char *str;
unsigned int i;

str = malloc(sizeof(char) * size);
if (size == 0 || str == NULL)
return (NULL);

for (i = 0; < size i++)
str[i] = c;
return (str);
}
