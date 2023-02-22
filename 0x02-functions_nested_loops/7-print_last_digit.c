#include "main.h"

/**
 * main -entry point
 * n is the number to be tested
 * Description - function prints last digit of a number
 *
 * return  1 success
 */

int print_last_digit(int n)

{
	int last;

	int last = ((n % 10));

	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
