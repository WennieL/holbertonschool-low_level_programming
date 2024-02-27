#include <stdio.h>
#include "main.h"

/**
 * puts_half - print the second half of the string
 * @str: The string to be passed
 *
 * if the number of char is odd, sholud print the last n char of the string
 * where n = (length_of_the_string - 1) / 2
 * Return: void
 *
 */

void puts_half(char *str)
{
	int length = 0;
	int start_index;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		start_index = length / 2;

		while (length > start_index)
		{
			_putchar(str[start_index]);
			start_index++;
		}
	}
	else
	{
		start_index = (length - 1) / 2;

		while (length > start_index)
		{
			_putchar(str[start_index]);
			start_index++;
		}
	}

	_putchar('\n');
}
