#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: input size 1
 * @size: input size bytes
 * Return: nothing
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < (nmenb * size); i++)
		p[i] = 0;
	return (p);
}
