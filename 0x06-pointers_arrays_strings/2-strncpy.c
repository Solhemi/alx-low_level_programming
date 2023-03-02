#include "main.h"

/**
 * _strncpy - copy str
 * @dest: char
 * @src: char
 * @n: int
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)

{
	int j = 0;

	while (src[j] != '\0' && j < n)
	{
		dest[j] = src[j];
		j++;
	}
	while (n > j)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
