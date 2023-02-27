#include "main.h"

/**
 * _strlen - string length
 * @s: string
 *
 *
 * Return: 0 success
 */
int _strlen(char *s)
{
	char s[];
	int i;

	for (i = 0; s[i] != '0'; ++i)
	{
		printf("length of string is: %d", i);
	}
	return (0);
}
