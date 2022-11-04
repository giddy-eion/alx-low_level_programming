#include "main.h"

/**
 * factorial - gives the factorial of n
 * @n: integer
 * Return: n if successful
 * -1 if there is an error
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
		return (1);
	return (n * factorial (n -1));
}
