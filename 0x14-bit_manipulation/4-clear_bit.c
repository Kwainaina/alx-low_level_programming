#include <stdio.h>
#include <stdio.h>
#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to the number
 * @index: index to set
 * Return: 1 if it worked, -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;
	unsigned int s_index;

	s_index = 0;
	mask = 1;
	while (mask < 2147483648)
	{
		if (s_index == index)
		{
			*n = *n & ~(1 << index);
			return (1);
		}
		s_index++;
		mask = mask << 1;
	}
	return (-1);
}
