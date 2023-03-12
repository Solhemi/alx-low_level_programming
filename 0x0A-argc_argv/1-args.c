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
	(void) argv;/* argv is ignored*/

	printf("%d\n", argc - 1);
		return (0);
}
