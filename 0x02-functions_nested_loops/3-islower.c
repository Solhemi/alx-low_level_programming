#include "main.h"

/**
 * _islower - Entry point
 * @c: int
 *
 *
 * Return: 0 for success and 0 otherwise
 */

int _islower(int c)

{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
