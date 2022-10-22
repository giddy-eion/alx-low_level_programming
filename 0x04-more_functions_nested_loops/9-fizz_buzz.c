#include <stdio.h>

/**
 * main - prints 1 - 109
 * if multiple of 3 prints fizz
 * if multiple of 5 prints buzz
 * it multiples of both printa fizzbuzz
 * Return: 0 if successful
 */
int main(void)
{
	int a = 100;

	for (a = 1; a <= 100; a++)
	{
		if ((a % 3) != 0 && (a % 5) != 0)
		{
			printf("%d", a);
		}
		else if ((a % 3) == 0 && (a % 5) == 0)
		{
			printf("fizzbuzz");
		}
		else if ((a % 3) == 0)
		{
			printf("fizz");
		}
		else if ((a % 5) == 0)
		{
			printf("buzz");
		}

		if (a == 100)
			continue;
		putchar(' ');

	}
	putchar('\n');

	return (0);
}
