#include "main.h"
#include <stdlib.h>

/**
 * str_concat - get each of input and  add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i = 0, ci = 0, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	concat = malloc((len1 + len2 + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);

	while (s1[i] != '\0')
	{
		concat[i] = s1[i];
		i++;
	}

	while (s2[ci] != '\0')
	{
		concat[i] = s2[ci];
		i++, ci++;
	}
	concat[i] = '\0';
	return (concat);
}

