#include <stdio.h>

int main(void)
{
	int size;
	int hgt, wid;

	printf("input size: ");
	scanf("%d", &size);

	if (size > 0)
	{
		for (hgt = 0; hgt < size; hgt++)
		{
			for (wid = 0; wid < size; wid++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}

	return (0);
}
