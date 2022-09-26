#include <stdio.h>
#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: source
 * @c: character
 *
 * Return: string from character
 */

char *_strchr(char *s, char c)
{
	int a = 0, b;

	while (s[a])
	{
		a++;
	}
	
	for (b = 0; b <= a; b++)
	{
		if (c == s[b])
		{
			s += b;
			return (s);
		}
	}
	return ('\0');
}
