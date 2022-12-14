#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: char pointer
 * @b: char
 * @n: unsigned int
 * Return: memeory if successful
 */
void *_memset(void *s, int b, unsigned int n)
{
	unsigned int index;
	unsigned char *memory = s, value = b;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
