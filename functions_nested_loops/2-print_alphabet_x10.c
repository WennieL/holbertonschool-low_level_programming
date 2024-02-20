#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 -
 * Prints the 10 times the
 * alphabet in lowercase followed by a newline.
 *
 * Description: This function prints the lowercase alphabet
 * from 'a' to 'z' 10 times
 * followed by a newline character ('\n').
 */

void print_alphabet_x10(void)
{
	int i, j;

	for (int i = 0; i < 10; i++)
	{
		for (int j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}

		_putchar('\n');
	}
}
