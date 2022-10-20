#include "main.h"

/**
 * _isdigit - checks digit from 0 to 9
 * @c: the value to be checked
 * Return: 1 if a digit, else 0
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
