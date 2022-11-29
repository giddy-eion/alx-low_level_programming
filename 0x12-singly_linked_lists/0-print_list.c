#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints struct
 * @h: struct
 * Return: nodes if successful
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}

		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	return (nodes);

}
