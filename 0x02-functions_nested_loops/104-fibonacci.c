#include"main.h"

/**
 * main - entry point
 *
 * Description: prints the first 98 fibonacci numbers
 *              starting with 1 and 2 followed by a new line
 *
 * Return: 0 (success)
*/

int main(void)
{
	int count;
	double fib1 = 1, fib2 = 2, sum;

	for (count = 0; count < 98; count++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);
		fib1 = fib2;
		fib2 = sum;
		if (count == 97)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
