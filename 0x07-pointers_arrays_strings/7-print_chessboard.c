#include <stdio.h>
#include "main.h"

/**
 * print_chessboard - function that prints the chessboard
 * @a: size of array
 *
 * Return: nothing
 */

void print_chessboard(char (*a)[8])
{
	int rows, i, j, k;

	k = 1;

	for (i = 0; i <= rows; i++)
	{
		for (j = 1; j <= cols; j++)
		{
			if (k == 1)
			{
				printf("1");
			}
			else
			{
				printf("0");
			}
			k *= -1;
		}

		if (cols % 2 == 0)
		{
			k *= -1;
		}

		printf('\n');
	}
	return (0);
}
