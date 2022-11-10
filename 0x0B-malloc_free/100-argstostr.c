#include "main.h"
#include <stdlib.h>

char *argstostr(int ac, char **av)
{
	int a, b;
	char *ar;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; *av[a][b]; b++)
			c++;
	}

	ar = malloc(sizeof(char) * (ac - 1));

	if (ar == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; *av[a][b]; b++)
		{
			ar[a] = malloc(sizeof(char) * b + 1);
		}
	}
	if (ar[a] == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; *av[a][b]; b++)
		{
			ar[a][b] = *av[a][b];
		}
		ar[a] = '\n';
	}
	return (ar);

}
