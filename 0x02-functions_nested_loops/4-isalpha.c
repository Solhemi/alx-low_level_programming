#include "main.h"

/**
 * _isalpha - entry point
 * @c: int
 * Description: checks for alphabet characters
 *
 * Return: 1 for success 0 otherwise
 */

int _isalpha(int c)

{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}

	{
		return (0);
	}
}
