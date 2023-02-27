#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps int
 * @a: int
 * @b: int
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	a = a - b;
	b = a + b;
	a = b - a;
}
