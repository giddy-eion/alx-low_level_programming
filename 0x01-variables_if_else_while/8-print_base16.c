#include <stdio.h>

/**
 *
 *main - entry point
 *Return: 0
 */
int main(void)
{
	char c;

	for (c = 0; c < 10; c++)
	{
		putchar((c % 10) + '10');
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
