#include <stdio.h>
#include <math.h>

/**
 * main: Entry point
 * Description: main prints largest prime factor
 *
 * Decription: fn prints largest prime
 *
 * Return: 0 success
 */

int main(void)

{
	long x, mf;
	long number = 612852475143;
	double square = sqrt(number);

	for (x = 1; x <= square; x++)
	{
		if (number % x == 0)
		{
			mf = number / x;
		}
		printf("%ld\n", mf);
		return (0);
	}
}
