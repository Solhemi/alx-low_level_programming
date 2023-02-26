#include "main.h"
#include <unistd.h>

/**
 * print_numbers - prints no.
 *
 * Description: prints 0-9
 * Return: success (0)
 */

void print_numbers(void)
{
	char i = '0';

	for (i >= '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
		_putchar("\n");
		return (0);
}
