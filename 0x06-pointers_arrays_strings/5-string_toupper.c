#include "main.h"

/**
 * string_toupper - convert lowercase to upper
 * @str: char pointer
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
			if (str[i] >= 97 && str[i] <= 122)
				str[i] -=32
	}
	return (str);
}
