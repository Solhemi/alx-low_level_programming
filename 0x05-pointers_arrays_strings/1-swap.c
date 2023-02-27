#include "main.h"

/**
 * swap_int - swaps int
 *
 *
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	a = a - b;
	b = a + b;
	a = b - a;
}
