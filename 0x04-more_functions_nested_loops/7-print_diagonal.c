#include "main.h"

/**
 * print_diagonal - prints diagonal equal to value of n
 * @n; value in integer
 */
void print_diagonal(int n)
{
	int loop, tab;

	if (n > 0)
	{
		for (loop = 0; loop < n; loop++)
		{
			for (tab = 0; tab < loop; tab++)
			{
				_putchar(' ');
			}
			_putchar('\\');

			if (loop == n - 1)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
