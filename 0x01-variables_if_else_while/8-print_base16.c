#include <stdio.h>

/**
 * main - entry point
 * Description:- main function lists hexadecimal
 * return: always 0 (success)
 */
int main(void)
{
	int num, alpha;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
	}
	for (alpha = 97; alpha <= 102; alpha++)
	{
		putchar(alpha);
	}
	return (0);
}
