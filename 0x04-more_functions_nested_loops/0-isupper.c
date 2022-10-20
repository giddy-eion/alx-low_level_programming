#include "main.h"

/**
 * main - checks for upper case letters
 *
 * Description: uses the isupper option
 * Return: 1 if upper case, else 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'B')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
