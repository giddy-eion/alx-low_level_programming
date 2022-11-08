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
	int a = 0, b, c, d;
	char dup;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (c = 0; s1[c] || s2[c]; c++)
	{
		a++;
	}

	dup = malloc(sizeof(char) * a);

	if (dup == NULL)
	{
		return (NULL);
	}

	for (c = 0; s1[c]; c++)
	{
		dup[b++] = s1[c];
	}

	for (c = 0; s2[c]; c++)
	{
		dup[b++] = s2[c];
	}

	return (dup);
}
