#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - fn
 * @b: unsigned int.
 *
 * Return: p
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}

