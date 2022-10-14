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

	printf("Size of a char: %ld byte(s)\n", sizeof(c));
	printf("Size of an int: %ld byte(s)\n", sizeof(i));
	printf("Size of a long int: %ld byte(s)\n", sizeof(li));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(lli));
	printf("size of a float: %ld byte(s)\n", sizeof(f));
	return (0);
}
