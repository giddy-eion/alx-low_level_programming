#include "main.h"

/**
 * print_line - prints dash equal to n
 * @n: value
 */
void print_line(int n)
{
	int loop;

	if (n > 0)
	{
		for (loop = 0; loop < n; loop++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
