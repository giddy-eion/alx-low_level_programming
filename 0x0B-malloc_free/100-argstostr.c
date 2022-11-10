#include "main.h"
#include <stdlib.h>

char *argstostr(int ac, char **av)
{
	int a, b;
	char *ar;

	if (ac == 0 || av == NULL)
		return (NULL);

	b = ((ac - 1) * 2) + 1;
	ar = malloc(sizeof(char) * b);
	if (ar == NULL)
		return (NULL);

	for (a = 0; a <= b; a++)
        {
                if (a % 2 == 0)
                {
                        ar[a] = av[a];
                }
                else if (a == 1 || a % 2 == 1)
                {
                        ar[a] = '\n';
                }
        }
	return (ar);
}
