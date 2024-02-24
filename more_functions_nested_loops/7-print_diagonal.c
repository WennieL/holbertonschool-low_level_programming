#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - it draws a diagonal line on the terminal
 * @n: \ should be printed where @n is the number of times the character
 * The diagonal should end with a \n
 *
 * Return: void
 *
 * If @n is 0 or less, only print a \n
 *
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{

			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else if (n == 0)
	{
		_putchar('\n');
	}
	else
		_putchar('\n');
}
