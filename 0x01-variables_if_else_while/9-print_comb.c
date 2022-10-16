#include <stdio.h>

/**
 * main - entrt point
 *
 * Description: prints 1 to 9 with spaces ans commas in between
 * Return: 0
 */
int main(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		putchar((c % 10) + '0');
		if (c ==  9)
			continue;

		putchar(',');
		putchar(' ');

	}
	putchar('\n');
	return (0);
}
