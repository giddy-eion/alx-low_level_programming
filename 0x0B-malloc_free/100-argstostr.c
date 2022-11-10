#include "main.h"
#include <stdlib.h>

/**
 * argstostr - comcatenates all arguments of a string
 * @ac: string count
 * @av: string of char type
 * Return: ar if successful and
 * NULL on failure
 */
char *argstostr(int ac, char **av)
{
	int a, b, c = 0, d;
	char *ar;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			c++;
	}

	ar = malloc(sizeof(char) * c + 1);
	if (ar == NULL)
		return (NULL);

	d = 0;
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			ar[d++] = av[a][b];
		}
		ar[d++] = '\n';
	}
	ar[c] = '\0';

	return (ar);
}
