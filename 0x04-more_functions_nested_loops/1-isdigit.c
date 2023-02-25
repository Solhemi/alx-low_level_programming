#include "main.h"

/**
 * _isdigit - fn
 *
 * @c: is int
 * Description: test digit
 * Return: 1 is success 0 otherwise
 */

int _isdigit(int c)
{
	for (c >= 0 && c <= 9)
	{
		return (1);
	}
	return (0);
}
