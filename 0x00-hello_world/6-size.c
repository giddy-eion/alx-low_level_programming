#include <stdio.h>

/**
 * main - print the strings in printf function
 *
 * Description: using the main function
 * this program initialize types and print sizeof initialized types
 * Return: 0
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %ld bytes(s)\n", sizeof(c));
	printf("Size of an int: %ld byte(s)\n", sizeof(i));
	printf("Size of a long int; %ld bytes(s)\n", sizeof(li));
	printf("size of a long long int: %ld bytes(s)\n", sizeof(lli));
	printf("Size of a float: %ld bytes(s)\n", sizeof(f));
	return (0);
}
