#include "main.h"
#include <stdlib.h>

int **alloc_grid(int width, int height)
{
	int *array, *array2;
	int a, b, c, d;

	if ((width <= 0) || (height <= 0))
		return (NULL);

	else
	{
		a = width;
		b = height;
		array = malloc(sizeof(int) * (a * b));
		if (array == NULL)
			return (NULL);

		for (c = 0; c <= width; c++)
		{
			for (d = 0; d <= height; d++)
			{
				array[c][d] = 0
			}
		}
		return (array);
	}
}
