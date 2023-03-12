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
	int i;

	for (i = 0; argc > i; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
