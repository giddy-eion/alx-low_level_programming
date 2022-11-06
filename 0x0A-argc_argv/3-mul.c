#include <stdio.h>
#include <stdlib.h>

/**
 * main - does multiplication of arguments
 * @argc: number of arguments passed
 * @argv: argumets in string array
 * Return: 0 if successful
 * 1if not
 */
int main(int argc, char *argv[])
{
	int mul, int1, int2;

	if (argc <= 2)
	{
		printf("Error\n");

		return (1);
	}

	else
	{
		int1 = atoi(argv[1]);
		int2 = atoi(argv[2]);
		mul = int1  * int2;
		printf("%d\n", mul);

		return (0);
	}
}
