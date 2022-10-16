#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints a to z execpt e and q
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	if (ch != 'e' && ch != 'q')
	{
		putchar(ch)
	}
	}
	putchar('\n')
	return (0)
}
