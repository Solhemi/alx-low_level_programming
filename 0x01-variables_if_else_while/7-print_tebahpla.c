#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: always (0) success
 */

int main(void)
{
char alpha = 'z';
for (alpha = 'z'; alpha >= 'a'; alpha--)
putchar(alpha);
putchar('\n');
return (0);
}
