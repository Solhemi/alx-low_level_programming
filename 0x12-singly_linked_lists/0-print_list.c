#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
 * print_list - fn to print elements of struct list_t
 * @h: ptr to list_t
 *
 * Return: node no.
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		if (h->str == NULL)
		printf("[0] nil\n");
		else
		printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		n++;
	}
	return (n);
}

