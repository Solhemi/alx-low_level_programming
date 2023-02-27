#include "main.h"
#include <stdio.h>

/**
 * _strlen - str
 * @str: string
 *
 *
 * Return: 0 success
 */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;
	return (length);
}
