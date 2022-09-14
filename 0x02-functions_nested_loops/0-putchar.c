#include <main.h>



/**
 * print alphabet -  function that prints the alphabet, in lowercase
 * You can only use _putchar
 * Return: nothing.
 */

void print_alphabet(void)
{
	int l = 'a';

	while (l <= 'z')
	{
		_putchar(l)
		l += 1;
	}
	_putchar(10);
}
