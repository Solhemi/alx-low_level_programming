#include "main.h"

/**
 * *leet - fn
 * @n: input
 *
 *
 *
 * Return: chari
 */

char *leet(char *n)

{
	int l, m;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (l = 0; n[l] != '\0'; l++)
	{
		for (m = 0; m < 10; m++)
		{
			if (n[l] == s1[m])
			{
				n[l] = s2[m];
			}
		}
	}
	return (n);
}
