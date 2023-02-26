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
	int y, z;

	for (y = 0; y < 10; y++)
	{
		for (z = 0; z <= 14: z++)
		{
		if (z > 0)
		{
		_putchar((z / 10) + '0');
		}
		_putchar((z % 10) + '0');
		}
		_putchar('\n');
	}
}

