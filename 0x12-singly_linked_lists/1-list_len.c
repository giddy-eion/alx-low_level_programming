#include "lists.h"

/**
 * list_len - list number of nodes passed through the function
 * @h: struct
 * Return: nodes if successful
 */
size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
