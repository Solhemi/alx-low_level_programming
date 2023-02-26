#include "main.h"

/**
 * more_numbers - zero to 14
 *
 * Description: prints row 3 times
 *
 * Return: void
 */

void more_numbers(void)

{
	int x, y;

	if (y >= 0 && y <= 3)
	{
		for (x >= 0; x <= 14; x++)
		{
			_putchar(X + '0');
			_putchar('\n');
		}
		else
		{
			_putchar('\n');
		}
	}
}
