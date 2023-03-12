#include <stdio.h>
#include "main.h"

/**
 * main - args fn
 * @argc: count args
 * @argv: arg array
 *
 * Return: 0 for success 1 on error
 */

int main(int argc, char *argv[])
{
	int a, b, result;

	a = 0;
	b = 0;
	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		result = a * b;
		printf("%d\n", result);
	}
	else
	{
		printf("error\n");
		return (1);
	}
	return (1);
}
