#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: always (0) success
 */

int main(void)
{
int n = 0;
for (n = 0; n <= 9; n++)
putchar(48 + n);
putchar('\n');
return (0);
}
