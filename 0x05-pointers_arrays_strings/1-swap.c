#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps int
 * @a: int
 * @b: int
 *
 * Return: 0 success
 */

void swap_int(int *a, int *b)

{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
	return (0);
}
