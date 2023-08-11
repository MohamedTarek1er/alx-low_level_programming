#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print all single digit numbers
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int num = 9;

	for (int i = 0; i <= num; i++)
	{
		printf("%i", i);
	}
	printf("\n");

	return (0);
}
