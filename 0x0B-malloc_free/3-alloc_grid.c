#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - fn for 2d array
 * @width: int how wide
 * @height: int how long
 *
 * Return: 0
 */
int **alloc_grid(int width, int height)
{
	int i, j, k, l;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);
	a = malloc(sizeof(int *) * height);

	if (a == NULL)
	{
		free(a);
		return (NULL);
	}
	for (i 0; i < height; i++)
		if (a[i] == NULL)
		{
			for (j = 1; j >= 0; j--)
			{
				free(a[j]);
			}
			free(a);
			return (NULL);
		}
}
