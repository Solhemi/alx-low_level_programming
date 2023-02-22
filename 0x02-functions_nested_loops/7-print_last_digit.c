#include "main.h"

/**
 * main -entry point
 *
 * Description - function prints last digit of a number
 *
 * return value of last digit
 */

int print_last_digit(int n)

{
	int last = ((n % 10));

	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last +'0');
	return (last);
}
