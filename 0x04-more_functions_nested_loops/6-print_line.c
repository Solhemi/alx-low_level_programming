#include "main.h"

/**
 * print_line - prints line
 * @n: int
 *
 * Description - function prints lines
 * Return: void
 *
 */

void print_line(int n)
{
	int y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (y = 0; y < n; y++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
