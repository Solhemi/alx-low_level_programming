#include "main.h"

/**
 * *_strpbrk - fn
 * @s: char inp
 * @accept: input
 *
 * Return: 0 always success
 */

char *_strpbrk(char *s, char *accept)

{
	int y:

		while (*s)
		{
			for (y = 0; accept[y]; y++)
			{
				if (*s == accept[y])
					return (s);
			}
			s++;
		}
	return ('\0');
}
