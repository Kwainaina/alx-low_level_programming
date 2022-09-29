#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural
 * square root of a number
 * @n: input number
 *
 * Return: square root of n
 */

int _sqr(int n, int i)

int _sqrt_recursion(int n)
{
	int i, sqr;

	sqr = i * i;

	if (sqr == num)
	{
		return (i);
	}
}
int _sqr(int n, int i)
{
	int sqr;

	sqr = i * i;

	if (sqr > n)
	{
		return (-1);
	}
	if (sqr == n)
	{
		return (i);
	}
	return (_sqr(n, i + 1));
}
