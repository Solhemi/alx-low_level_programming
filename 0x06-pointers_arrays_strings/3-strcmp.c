#include "main.h"

/**
 * _strcmp - comp. str
 * @s1: str 1
 * @s2: str 2
 *
 * Return: 0 success
 */

int _strcmp(char *s1, char *s2)

{
	int i, j;

	while (i = 0 && s1[i] != '\0')
	{
		i++;
	}
	while (j = 0 && s2[j] != '\0')
	{
		j++;
		if (s1[i] == s2[j])
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
}
