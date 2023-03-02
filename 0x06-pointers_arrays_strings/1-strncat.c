#include "main.h"

/**
 * _strncat - concat str.
 * @dest: destn
 * @src: source
 * @n: int
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)

{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (dest[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
