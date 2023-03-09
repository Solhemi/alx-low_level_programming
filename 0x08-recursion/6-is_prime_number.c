#include "main.h"
#include <stdio.h>

/**
 * _prime_number - fn
 * @n: number
 * @i: int
 *
 * Return: 1
 */

int _prime_number(int n, int i);

int is_prime_number(int n)
{
	return (_prime_number(n, 1));
}
/**
 * is_prime_number - fn
 * @n: number
 * @i: int
 *
 * Return: 0
 */
int _prime_number(int n, int i)
{
	if ((n <= 1)
		return (0);

	if (n % i == 0 && i > 1)
		return (0);

	if ((n / i) < i)
		return (1);
		return (_prime_number(n, i + 1));
}
