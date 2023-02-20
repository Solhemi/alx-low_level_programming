#include <stdio.h>

/**
 * main - entry point
 * Description:- print comb of numbers
 * return: always 0 (success)
 */
int main(void)
{
	int comb;

	for (comb = 48; comb <= 57; comb++)
	{
		putchar(comb);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
