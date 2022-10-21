#include "main.h"

/**
 * print_line - prints dash equal to n
 */
void print_line(int n)
{
	int loop;

	if (n > 0)
	{
		for (loop = 0; loop < n; loop++)
		{	
			putchar('_');
		}
	}
	putchar('\n');
}
