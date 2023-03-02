#include "main.h"

/**
 * reverse_array - fn
 * @a: int
 * @n: int
 *
 * Return: void
 */

void reverse_array(int *a, int n)

{
	int i, tmp;

	for (i = 0; i < n--; i++)
	{
	tmp = a[i];
	a[i] = a[n];
	a[n] = tmp;
	}
}
