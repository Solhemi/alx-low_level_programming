#include "main.h"

/**
 * *_strcpy - copy str
 * @dest: char
 * @src: char
 *
 * Return: destination
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
