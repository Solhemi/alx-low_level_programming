#include "main.h"

/**
 * *_memcpy - copy fn
 * @src: source
 * @dest: destination
 * @n: int
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	int i;
	int n;
	i = n;

	for (i = 0; n > i; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
