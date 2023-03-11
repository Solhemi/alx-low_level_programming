#include "main.h"

/**
 * print_alphabet_x10 - entry point
 *
 * dexcription : prints alphabets 10x
 *
 * Return: always 0 success
 */

void print_alphabet_x10(void)

{
	char x;
	int i = 0;

	while (i <= 9)
	{
	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
		_putchar('\n');
		i++;
	}
}
