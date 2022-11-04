#include "main.h"

/**
 * _pow_recursion - gives the value of an integer in terms of power raised to
 * @x: values of integer
 * @y: power of x
 * Return: value of x raised to pwer y if successful
 * and -1 if not
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
