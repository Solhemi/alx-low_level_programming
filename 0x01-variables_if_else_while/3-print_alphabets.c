#include <stdio.h>

/**
 * main-Entry point
 *
 * Return: always 0 suceess
 */
int main(void)
{
char alpha1 = 'a';
char alpha2 = 'A';
{
for (alpha1 = 'a'; alpha1 <= 'z'; alpha1++)
putchar(alpha1);
for (alpha2 = 'A'; alpha2 <= 'Z'; alpha2++)
putchar(alpha2);
putchar('\n');
}
return (0);
}
