#include "main.h"

/**
 * Main - Entry point
 *
 * Description- function checks for lowercase 
 *
 * return : 1 for success and 0 otherwise
 */

int _islower(int c)

{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
