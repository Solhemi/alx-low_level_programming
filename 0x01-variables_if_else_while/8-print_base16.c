#include <stdio.h>

/**
 * main -entry point
 *
 * return: always (0) success
 */

int main(void)
{
char hexadig = '0';
char hexanum = 'a';
{
for (hexadig = '0'; hexadig <= '9'; hexadig++)
putchar(hexadig);
for (hexanum = 'a'; hexanum <= 'f'; hexanum++)
putchar(hexanum);
putchar('\n');
}
return (0);
}
