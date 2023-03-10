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
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
