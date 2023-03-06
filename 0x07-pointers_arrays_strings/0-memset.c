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
	int i = 0;

	for (; 0 < n; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
