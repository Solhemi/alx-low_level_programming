#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
int a = n % 10;
if (a > 5)
{
printf("Last digit of %d is a and is greater than 5\n", a);
}
else if (a == 0)
{
printf("Last digit of %d is a and is 0\n", a);
}
else if (a < 6 && a != 0)
{
printf("Last digit of %d is a and is less than 6 and not 0\n", a);
}
return (0);
}
