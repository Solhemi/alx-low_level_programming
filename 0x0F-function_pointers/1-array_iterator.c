#include <stddef.h>
#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - fn
 * @action: ptr
 * @array: int array
 * @size: array size
 * Return: each member
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int b;

	if (array == NULL || action == NULL)
		return;
	for (b = 0; b < size; b++)
	{
		action(array[b]);
	}
}
