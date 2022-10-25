#include "main.h"

/**
 * swap_int - swaps a and b
 * @a: pointer
 * @b: pointer
 */
void swap_int(int *a, int *b)
{
	*a = &b;
	*b = &a;
}

