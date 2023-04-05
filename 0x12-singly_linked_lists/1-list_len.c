#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * list_len - length of list
 * @h: ptr to list_t
 *
 *
 * Return: i
 */

size_t list_len(const list_t *h)
{
	size_t i = 1;

	while (h)
	{
		if (h->next != NULL)
			i++;
		h = h->next;
	}
	return (i);
}

