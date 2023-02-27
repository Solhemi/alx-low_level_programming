#include "main.h"

/**
 * puts_half - prt 2nd half
 * @str: string
 *
 * Return: void
 */

void puts_half(char *str)

{
	int l = 0;
	int m;

	while (str[l] != '\0')
	{
		l++;
	}
	if (l % 2 == 1)
	{
		m = (l - 1) / 2;
		m = m + 1;
	}
	else
	{
		m = l / 2;
	}
	for (; m < l; m++)
	{
		_putchar(str[m]);
	}
	_putchar('\n');
}
