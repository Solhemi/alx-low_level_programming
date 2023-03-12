#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - CLI fns
 * @argc: arg count
 * @argv: arg array
 *
 * Return: 0
 */
int main(int argc, char *argv[])

{
	int a, b, add;

	a = 0;
	b = 0;
	if (argc == 3)
	{
		a = isdigit(argv[1]);
		b = isdigit(argv[2]);
		add = a + b;
		printf("%d\n", add);
	}
	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
