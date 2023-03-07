#include "main.h"

/**
 * *_strchr - find c
 * @s: string array
 * @c: char
 *
 * Return: &s[i]
 */

char *_strchr(char *s, char c)

{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		else
			return (null);
	}
}
