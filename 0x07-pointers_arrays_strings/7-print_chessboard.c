#include "main.h"

/**
 * print_chessboard - prints chessboard by two dimensional array
 *
 * @a: rows
 *
 * Return: Nothing
*/

void print_chessboard(char (*a)[8])
{
	unsigned int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			putchar(a[i][j]);
		}
		putchar('\n');
	}
}
