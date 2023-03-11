#include "main.h"

/**
 * print_sign - entry point
 * @n: int
 * Description - checks the number
 *
 * Return: 1 for positive, -1 for negative and zero for otherwise
 */

int print_sign(int n)

{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
