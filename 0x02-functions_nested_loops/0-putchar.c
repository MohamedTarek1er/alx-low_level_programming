#include "main.h"

/**
 * main _ entry point
 *
 * Description: print _putchar using putchar prototype
 *
 * Return: 0 (success)
*/

int main(void)
{
	char str[] = "_putchar";

	for (int ch = 0; ch <= 7; ch++)
		_putchar(str[ch]);
	_putchar("\n");

	return (0);
}
