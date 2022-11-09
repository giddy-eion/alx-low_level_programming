#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The string to be concatenated upon.
 * @s2: The string to be concatenated to s1.
 *
 * Return: If concatenation fails - NULL.
 * Otherwise - a pointer the newly-allocated space in memory
 * containing the concatenated strings.
 */
char *str_concat(char *s1, char *s2)
{
	char *array;
	int len = 0, a, b, d, c = 0, e;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (a = 0; s1[a]; a++)
		len++;
	len += 1;
	for (b = 0; s1[b]; b++)
		len++;
	len += 1;

	array = malloc(sizeof(char) * len);

	if (array == NULL)
		return (NULL);

	for (d = 0; s1[d]; d++)
		array[c++] = s1[d];
	for (e = 0; s2[e]; e++)
		array[c++] = s2[e];

	return (array);
}
