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
	return (is_prime_number(n, 1));
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
	if ((n <= 1)
		return (0);

	if (n % i == 0 && i > 1)
		return (0);

	if ((n / i) < i)
		return (1);
		return (is_prime_number(n, i + 1));
}
