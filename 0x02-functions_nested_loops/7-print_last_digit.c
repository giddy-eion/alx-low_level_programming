#include "main.h"

/**
 * print_last_digit - int n
 * @n: value
 *
 * Description: prints last digit of a values
 * Return: last digit 
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
	{
		last_digits * = -1;
	}
	_putchar(last_digit + '0');

	return (last_digit);

}
