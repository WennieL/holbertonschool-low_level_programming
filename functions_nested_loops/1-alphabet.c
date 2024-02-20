#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * write a function that prints the alphabet
 * in lowercase, followed by a new line
 *
 * Prototype: void print_alphabet(void)
 * to print a to z
 * can only use _putchar twice in the code
 *
 */

void print_alphabet(void)
{
	char  ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}

	_putchar('\n');
}
