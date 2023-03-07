#include "main.h"

/**
 * *_memset -memset
 * @s: char
 * @b: char
 * @n: char
 *
 * Return: s success
 */

char *_memset(char *s, char b, unsigned int n)

{
	int i;
	unsigned int n;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
