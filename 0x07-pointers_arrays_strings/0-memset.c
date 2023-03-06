#include "main.h"

/**
 * *_memset -memset
 * @s: char
 * @b: char
 * @n: char
 *
 * Return: *ptr
 */

char *_memset(char *s, char b, unsigned int n)

{
	int n;
	int i;
	char *s;
	char *ptr;

	for (i = 0; i < n; i++)
	{
		*s = 'b';
		*ptr = &s;
	}
	return (*ptr);
}
