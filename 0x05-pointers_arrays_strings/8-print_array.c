#include "main.h"

/**
 * print_array - prints array
 * @a: int
 * @n: int
 * Return: void
 */

void print_array(int *a, int n)

{
	int c;

	for (c = 0; c < n; c++)
	{
		printf("%d", a[j]);
		if (c != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
