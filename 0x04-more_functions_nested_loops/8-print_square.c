#include"main.h"

/**
 * print_square - print a square using the
 *		the character #
 *
 * @size: is the size of the square
 *
 * Return: 0 (success)
*/

void print_square(int size)
{
	int row, col;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (col = 1; col <= size; col++)
				_putchar('#');
			_putchar('\n');
		}
	}
}

