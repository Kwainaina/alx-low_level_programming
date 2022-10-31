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
	unsigned long int mask;
	unsigned int s_index;
	(void) index;

	mask = 1;
	s_index - 0;
	while (mask < 2147483648)
	{
		if (s_index == index)
		{
			*n = *n | 1 << index;
			return (1);
		}
		s_index++;
		mask = mask << 1;
	}
	return (-1);
}
