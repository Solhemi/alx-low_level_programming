#include "main.h"

/**
 * Main - entry point
 *
 * Description: checks for alphabet characters
 *
 * return: 1 for success 0 otherwise
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
