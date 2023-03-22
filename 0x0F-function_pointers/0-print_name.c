#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - fn prints name
 * @name: person's name
 * @f: ptr to void fn
 * Return: name
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
