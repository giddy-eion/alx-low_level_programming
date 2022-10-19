#include "main.h"

/**
 *print_alphabet_x10 - void
 *
 * Description: print tge alphabet in lowercase x10
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int rep = 0;
	char abc;
	
	while (rep++ <= 9)
	{
		for (abc = 'a'; abc <= 'z'; abc++)
		{
			_putchar(abc);
		}
	}
	_putchar('\n');
}
