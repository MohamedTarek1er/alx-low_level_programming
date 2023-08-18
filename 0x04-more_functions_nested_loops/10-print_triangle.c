#include"main.h"

/**
 * print_triangle - prints a triangle
 *
 * @size: size of the triangle
 *
 * Return: 0 (success)
*/

void print_triangle(int size)
{
	int postn, space;

	if (size <= 0)
		putchar('\n');
	else
	{
		for (postn = 1; postn <= size; postn++)
		{
			for (space = 1; space <= size; space++)
			{
				if ((postn + space) <= size)
					putchar(' ');
				else
					putchar('#');
			}
			putchar('\n');
		}
	}
}
