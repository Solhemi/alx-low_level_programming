#include <stdio.h>

/**
 * main - entry point
 *
 * return: always 0 (success)
 */

int main(void)
{
char hexad;
char hexan;
{
for (hexad = 0, hexan = 'a' ; hexad <= '9' &&  hexan <= 'f'; hexad++, hexan++)
putchar(hexad);
putchar(hexan);
putchar('\n');
}
return (0);
}
