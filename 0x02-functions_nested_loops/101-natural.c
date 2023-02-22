#include <stdio.h>

/**
 *main - entry point
 *function prints multiples of 3 and 5 < 1024
 *
 *return : always 0 success
 */

int main(void)
{
	int i, z = 0;

	while (i < 1024)
	{
		if ((i % 3 ==0) || (i % 5 == 0))
		{
			z = z + i;
		}
		i++;
	}
	printf("%d\n", z);
	return (0);
}
 
