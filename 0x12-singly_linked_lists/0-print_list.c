#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *
 *
 *
 *
 *
 *


typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
*/

size_t print_list(const list_t *h)
{
	char str = 0;
	
	if (h->str == NULL)
		printf("[0] nil\n");
	else
		printf("%u %s\n", h->len, h->str);
	h = h->next;
	str++;

	return (str);
}

