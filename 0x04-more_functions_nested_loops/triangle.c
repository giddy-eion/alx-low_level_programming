#include <stdio.h>

int main(void)
{
	int size;
	int hgt, slt;

	printf("input size:\a ");
	scanf("%d", &size);

	if (size > 0)
	{
		for (hgt = 1; hgt <= size; hgt++)
		{
			for (slt = size - hgt; slt > 0; slt--)
				putchar(' ');
			for (slt = 0; slt < hgt; slt++)
				putchar('#');

			if (hgt == size)
				continue;
			putchar('\n');
		}
	}
	putchar('\n');

}
