#include "main.h"

/**
 * main - void
 *
 * Description: prints lower case letters of the alphabet
 *Return: 0 if successful
 */
void print_alphabet(void)
{
	char abc;

	for (abc = 'a'; abc <= 'z'; abc++)
	{
		_putchar(abc);
	}
	_putchar('\n');
}
