#include "main.h"
#include <stdlib.h>

int **alloc_grid(int width, int height)
{
	int **array;
	int a, b, c;

	if ((width <= 0) || (height <= 0))
		return (NULL);

	array = malloc(sizeof(int) * height);
	if (array == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		array[a] = malloc(sizeof(int) * width);

		if (array[a] == NULL)
		{
			for (; a >= 0; a--)
			{
				free(array[a]);
			}

			free(array);
			return (NULL);
		}
	}

	for (b = 0; b < height; b++)
	{
		for (c = 0; c < width; c++)
		{
			array[b][c] = 0;
		}
	}
	return (array);
}
