#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * main- entry point
 * main is a program to print string to standard error
 *
 * return: always (1) success
 */

int main(void)
{
	fwrite("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", stdout);
	return (1);
}
