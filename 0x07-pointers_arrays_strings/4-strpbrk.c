#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: source
 * @accept: accepted string
 *
 * Return: number of bytes
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int a = 0, b, t = 0;

	while (accept[a])
	{
		b = 0;

		 while (s[b] != 32)
		 {
			 if (accept[a] == s[b])
			 {
				 t++;
			 }
			 b++;
		 }
		 a++;
	}
	return (t);
}
