#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * struct list_t - singly linked list struct type
 * @str: char type
 * @len: int type
 * @next: points to a next node
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_t *next;
} list_t;

size_t print_list(const list_t *h);

#endif
