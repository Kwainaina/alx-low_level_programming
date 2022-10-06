#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: size of int
 * Return: nothing
 */

void *malloc_checked(unsigned int b)
{
	void *al;

	al = malloc(b);
	if (al == NULL)
		exit(98);
	else
		return (al);
}
