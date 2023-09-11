#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a: an array of integers
 * @n: the numbers of elements to swap
 *
 * Return: Nothing
*/

void reverse_array(int *a, int n)
{
	int i;

	i = n;
	while (i > 0)
	{
		if (i == n)
			printf(", ");
		printf("%d", a[i])
			i--;
	}
	printf("\n");
}

