#include <stdio.h>
#include "main.h"

/**
 * main - takes args 2 print name
 * @__attribute__((unused): arg
 * @argc: arg count
 * @argv: arg array
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
