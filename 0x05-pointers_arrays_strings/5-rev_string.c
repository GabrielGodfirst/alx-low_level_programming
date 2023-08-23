#include "main.h"

/**
 * rev_string - Reverses a string
 * @s:The string that is to be reversed or modified
 * Return:Always return void
 */

void rev_string(char *s)
{
	int len = 0, index = 0;
	char tmp;

	while (s[index++])
		len++;
	for (index = len - 1; index >= len / 2; index--)
	{
	tmp = s[index];
	s[index] = s[len - index - 1];
	s[len - index - 1] = tmp;
	}
}
