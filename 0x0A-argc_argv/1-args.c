#include <stdio.h>

/**
 * main - prints the number of arguments
 * @argc: num of arguments passed
 * @argv: array of string (unused)
 * Return: 0 if successful
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	int count;

	if (argc == 1)
		printf("0\n");

	else if (argc > 1)
	{
		count = argc - 1;
		printf("%d\n", count);
	}

	return (0);
}
