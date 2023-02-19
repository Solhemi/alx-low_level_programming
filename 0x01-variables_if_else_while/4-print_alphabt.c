#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: always (0) success
 **/

int main(void)
{
char alpha = 'a';
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
if (alpha == 'e' || alpha == 'q')
continue;
putchar(alpha);
}
putchar('\n');
return (0);
}
