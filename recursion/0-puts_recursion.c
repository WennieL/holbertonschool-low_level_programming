#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a newline recursively
 * @s: Pointer to the string to be printed
 *
 * Description:
 * This function prints the string `s` followed by a newline character ('\n')
 * using recursion.
 * If `s` is an empty string ('\0'),
 * only the newline character will be printed.
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	while (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
