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
			printf("FizzBuzz");
		}
		else if ((a % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((a % 5) == 0)
		{
			printf("Buzz");
		}

		if (a == 101)
			continue;
		putchar(' ');

	}
	putchar('\n');

	return (0);
}
