#include <stdio.h>

/**
 * main - entry point
 * Description:- main function lists hexadecimal
 * return: always 0 (success)
 */
int main(void)
{
	int num, alpha;

	for (num = 48; num < 58; num++)
	{
		putchar(num);
		putchar(' ');
	}
	for (alpha = 97; alpha < 103; alpha++)
	{
		putchar(alpha);
		putchar(' ');
	}
	return (0);
}
