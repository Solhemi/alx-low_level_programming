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
	int a = 98;
	int b = 42;

	printf("a=%d\n, b=%d\n", a, b);
		swap_int(&a, &b);
		printf("a=%d\n, b=%d\n", a, b);
		return (0);
}
