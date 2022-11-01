#include "main.h"

/**
 * _memcpy - copies a memory block
 * @dest: void
 * @src: void
 * @n: unsigend int 
 * Return: dest if successful
 */
void *_memcpy(void *dest, const void *src, unsigned int n);
{
	unsigned int index;
	unsigned char *destination = dest;
	const unsigned char *source = src;

	for (index = 0; index < n; index++)
		destination[index] = source[index];

	return (dest);
}
