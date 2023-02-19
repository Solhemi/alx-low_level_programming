#include <stdio.h>

/**
 * main-Entry point
 *
 * Return: always 0 suceess
 */
int main(void)
{
char alpha = 'a';
char alpha = 'A';
{
for (alpha = 'a'; alpha <= 'z'; alpha++)
putchar(alpha);
putchar('\n');
for (alpha = 'A'; alpha <= 'Z'; alpha++)
putchar(alpha);
putchar('\n');
}
return (0);
}
