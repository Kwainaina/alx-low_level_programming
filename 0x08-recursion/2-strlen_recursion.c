#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 *
 * @s: string to receive
 *
 * Return: int
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (s + _strlen_recursion(s));
}
