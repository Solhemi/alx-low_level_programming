#include "main.h"

/**
 * _isupper - tests if char. is upper case
 * @c: is an integer input
 *
 * Description
 * Return: (1) success or 0 others
 */

int _isupper(int c)

{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}

