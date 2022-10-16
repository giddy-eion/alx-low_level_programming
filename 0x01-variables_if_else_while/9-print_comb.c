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
mm
	for (c = 48; c <= 57; c++)
	{
		purchar(c);
		if (c != 57)
		{
			putchar(',:);
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
