#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - prints each elem array of a newline
 * @array: array
 * @size: how many element to print
 * @action: pointer to the print in reg or hex
 * Return: void
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
