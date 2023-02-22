#include <stdio.h>

/**
 *Main - entry point
 *
 *function prints all multiples of 3 and 5
 *
 *return always 0 success
 */

int main(void)

{
	int i = 0;
	long j = 1, k = 2;

	while (i < 50)
	{
		if (i == 0)
			printf("%d", j);
		else if (i == 1)
			printf(", %ld", k);
		else
		{
			k = k + j;
			j = k - j;
			printf(", %ld",k);
		}
		++i;
	}
	printf("\n");
	return (0);
}
