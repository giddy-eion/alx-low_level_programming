#include <stdio.h>
#include "lists.h"

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		char *strn = h->str;
		unsigned int lent = h->len;

		nodes++;
		if (strn == NULL)
		{
			printf("[0] (nil)\n");
		}

		else
		{
			printf("[%u] (%s)\n", lent, strn);
		}
		h = h->next;
	}
	return (nodes);

}
