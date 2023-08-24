#include "main.h"

/**
 * reverse_array - reverse array of integers
 * @a: input array
 * @n: number of element in an array
 * Return: Always return void
 */

void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
