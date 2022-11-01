#include "main.h"

/**
 * _memcpy -copy a memory block into another
 * @dest: void
 * @src: void
 * @n: unsigned int
 * Return: dest if successfil
 */
void *_memcpy(void *dest, const void *src, unsigned int n)
{
	unsigned int index;
	unsigned char *destination = dest;
	const unsigned char *source = src;

	for (index = 0; index < n; index++)
		destination[index] = source[index];

	return (dest);
