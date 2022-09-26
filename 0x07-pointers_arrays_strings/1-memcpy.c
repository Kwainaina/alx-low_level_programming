#include <stdio.h>
#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: destination
 * @s: source
 * @n: bytes from memory area
 *
 * Return: memory area replaced
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for(a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
