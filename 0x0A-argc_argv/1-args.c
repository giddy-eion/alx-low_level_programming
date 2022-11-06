#include <stdio.h>

int main(int argc, char __attribute__((__unused__)) *argv)
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
