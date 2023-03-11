#include <stdio.h>
#include "main.h"

/**
 * main - CLI args
 * @argc: int
 * @argv: *array
 *
 * Return: 0
 */

int main(int argc, char *argv[])

{
	int i = 0;

	for (i > 1; i < argc; i++)
	{
		printf("%d\n", *argv[i]);
		return (0);
	}
}
