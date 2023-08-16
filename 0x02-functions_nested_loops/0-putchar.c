#include "main.h"

/**
 * main - Entry point
 *
 * Description: Prints _putchar using putchar prototype
 *
 * Return: 0 (Success)
*/

int main(void)
{
	char str[] = "_putchar";

	for (int ch = 0; ch < 8 ; ch++)
		_putchar(str[ch]);
	_putchar('\n');

	return (0);
}
