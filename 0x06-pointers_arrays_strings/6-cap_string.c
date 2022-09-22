#include <stdio.h>
#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 * @str: string to capitalize
 * Return: capitalized string
 */

char *cap_string(char *str)
{
	int index = 0;

	while (str[++index])
	{
		while (!(str[inde] >= 'a' && str[index] <= 'z'))
			index++;

		if (str[index - 1] == ' ' ||
				str[index - 1] == '\t' ||
				str[index - 1] == '\n' ||
				str[index - 1] == ',' ||
				str[index - 1] == ';' ||
				str[index - 1] == '.' ||
				str[index - 1] == '!' ||
				str[index - 1] == '?' ||
				str[index - 1] == '"' ||
				str[index - 1] == '(' ||
				str[index - 1] == ')' ||
				str[index - 1] == '{' ||
				str[index - 1] == '}')
			str[index] -= 32;
	}
	return (str);
}
