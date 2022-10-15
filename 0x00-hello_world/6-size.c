#include <stdio.h>

/**
 * main - prints the strings in the ptint function
 *
 * Description: uses main function
 * initialze types and then print tgeir sizeof as standard ouput
 * Return: 0
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long lli;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(li));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(lli));
	printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
