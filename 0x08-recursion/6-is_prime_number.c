#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - fn
 * @n: number
 * @i: int
 *
 * Return: 1
 */

int is_prime_number(int n, int i);

int is_prime_number(int n)
{
	return (1);
}
/**
 * is_prime_number - fn
 * @n: number
 * @i: int
 *
 * Return: 0
 */
int is_prime_number(int n, int i)
{
	if ((n % n == 1) && (n % 2 != 0))
		return (1);

	if (n <= 1)
		return (0);

	if (n == 0)
		return (0);
}
