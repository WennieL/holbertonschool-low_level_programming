#include <stdio.h>
#include "main.h"

/**
 * cap_string - capitalizes all words of string
 * @str: an input string to be converted
 *
 * Return: Pointer to the capitalized string
 *
 */

char *cap_string(char *str)
{
	int index = 0;
	int cap = 1;

	while (str[index] != '\0')
	{
		if (str[index] == ' ' || str[index] == '\t' || str[index] == '\n' ||
				str[index] == ',' || str[index] == ';' ||
				str[index] == '.' || str[index] == '!' ||
				str[index] == '?' || str[index] == '"' ||
				str[index] == '(' || str[index] == ')' ||
				str[index] == '{' || str[index] == '}')
		{
			cap = 1;
		}
		else if (cap)
		{
			if (str[index] >= 'a' && str[index] <= 'z')
			{
				str[index] -= 32;
			}
			cap = 0;
		}
		index++;
	}
	return (str);
}
