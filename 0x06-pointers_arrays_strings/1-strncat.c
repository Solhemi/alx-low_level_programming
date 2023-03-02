#include <main.h>

/**
 * _strncat - concat str.
 * @dest: destn
 * @src: source
 * @n: int
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)

{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		for (j = 0; j < n; src != '\0')
		{
			i++;
			j++;
			dest[i] = src[j];
		}
	}
	dest[i] = '\0';
	return (dest);
}
