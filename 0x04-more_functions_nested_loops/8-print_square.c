#include "main.h"

/**
 * print_square - prints # to form a square
 * @size: value
 */
void print_square(int size)
{
	int hegt, widt;

	for (hegt = 0; hegt < size; hegt++)
	{
		for (widt = 0; widt < size; widt++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
