#include "main.h"

/**
 * _strstr - searches for the first occurrence of pointerr needle in
 *			pointer haystack
 *
 * @haystack: string
 * @needle: string to search for first occurrence in it
 *
 * Return: pointer needle with first occurrence
*/

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
			{
				return (needle);
			}
			break;
		}
	}
	return (0);
}
