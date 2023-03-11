#include "main.h"

/**
 * print_alphabet - entry point
 *
 * Description - prints lower case alphabets
 *
 * return: always 0 success
 */

void print_alphabet(void)

{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
