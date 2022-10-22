#include "main.h"

/**
 * print_triangle - prints a right angle triangle
 * @size: value inputed
 */
void print_triangle(int size)
{
	int hgt, slt;

	if (size > 0)
	{
		for (hgt = 1; hgt <= size; hgt++)
		{
			for (slt = size - hgt; slt > 0; slt--)
			{
				_putchar(' ');
			}
			for (slt = 0; slt < hgt; slt++)
			{
				_putchar('#');
			}
			if (hgt == size)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
