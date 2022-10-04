#include <stdio.h>
#include "main.h"

/**
 * create_array - creates an array of chars, and initializes it
 * with a specific char
 * @size: input size
 * @c: input char
 * Return: char
 */

char *create_array(unsigned int size, char c)
{

	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);
	array = malloc(sizeofchar) * size);

	if (array == NULL)
		return (NULL);
	for (index = 0; index < size; index++)
		array[index] = c;
	return (array);
}
