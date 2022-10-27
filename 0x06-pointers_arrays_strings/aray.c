#include "main.h"
#include <stdio.h>

int main(void)
{
	int a[10];
	int n;

	for (n = 0; n < 10; n++)
	{
		printf("%d, ", a[n]);
	}

	printf("%d, ", reverse_array(a, [n]));
	return 0;
}
