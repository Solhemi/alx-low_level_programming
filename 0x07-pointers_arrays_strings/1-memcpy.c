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
	int i = n;
	int j;

	for (j = 0; i > j; j++)
	{
		dest[j] = src[j];
		n--;
	}
	return (dest);
}
