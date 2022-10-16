#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints a - z in reverse
 * Return: 0
 */
int main(void)
{
	char rev;

	for (rev = 'z'; rev >= 'a'; rev--)
	{
		putchar(rev);
	}
	putchar('\n');
	return (0);
}
