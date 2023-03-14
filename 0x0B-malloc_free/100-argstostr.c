#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concat. all arg in program
 * @av: char
 * @ac: int
 *
 * Return: s
 */

char *argstostr(int ac, char **av)
{
	int ch = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	char *s;

	if (arc == 0 || arv == NULL)
		return (NULL);
	while (i < arc)
	{
		while (arv[i][j])
		{
			ch++;
			j++;
		}
		j = 0;
		i++;
	}
	s = malloc((sizeof(char) * ch) + arc + 1);

	i = 0;

	while (arv[i])
	{
		while (arv[i][j])
		{
			s[k] = arv[i][j];
			k++;
			j++;
		}
		s[k] = '\n';

		j = 0;
		k++;
		i++;
	}
	k++;
	s[k] = '\0';
	return (s);
}
