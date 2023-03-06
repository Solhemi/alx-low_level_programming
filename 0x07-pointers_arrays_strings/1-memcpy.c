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

	for (i = 0; n > 0; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
