#include "main.h"

/**
 * _abs - computes absolute value
 *
 * @c: is number to be computed
 *
 * Return: Abs value of no or zero
 */

int _abs(int c)

{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
