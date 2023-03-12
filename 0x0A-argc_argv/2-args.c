#include <stdio.h>
#include "main.h"

/**
 * main - args fn
 * @argc: args count
 * @argv: args array
 *
 *
 * Return: 0
 */

int main(int argc, char *argv[])

{
	int i = 0;

	for (i = 1; argc < i; i++)
	{
		_putchar(argv[i]);
	}
		_putchar('\n');
		return (0);
}
