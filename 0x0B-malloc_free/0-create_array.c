#include "main.h"
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int num;

	if (size == 0)
	{
		return (NULL);
	}

	else
	{
		ar = malloc(sizeof(char) * size);

		if (ar == NULL)
		{
			return (NULL);
		}

		else
		{
			for (num = 0; num < size; num++)
			{
				ar[num] = c;
			}
			return (ar);
		}
	}
}
