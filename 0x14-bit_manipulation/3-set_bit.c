#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to the number
 * @index: index to change
 * Return: 1 if worked and -1 if di d not work
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) *))
		return (-1);
	*n ^= (1 << index);

	return (1);
}
