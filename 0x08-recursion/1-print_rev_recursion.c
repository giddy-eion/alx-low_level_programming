#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: pointer string of char type
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_putchar(s + 1);
		_putchar(*s)
	}
}
