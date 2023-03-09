#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - fn sqrt
 * _sqrt - natural sqrt
 * @n: number
 * @i: trial
 * Return: 0
 */

int _sqrt(int n, int i);

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - nat. sqrt
 * @n: number
 * @i: trial
 *
 * Return: 0
 */

int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
	return (-1);

	if (sqrt == n)
	return (i);

	return (_sqrt(n, i + 1));
}

