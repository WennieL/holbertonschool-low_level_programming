#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - 
 * Prints the alphabet in lowercase 
 * followed by a newline.
 *
 * Description: 
 * This function prints the lowercase alphabet 
 * from 'a' to 'z' followed by a newline character ('\n').
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}

	_putchar('\n');
}
