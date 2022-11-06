#include <stdio.h>

/**
 * main - prints the agtuments passed into main
 * @argc: number of arguments
 * @argv: string in char type
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}

	return (0);
}
