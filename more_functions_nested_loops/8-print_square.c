#include <stdio.h>
#include "main.h"

/**
 * print_square - prints a square followed by a new line
 * Return: void
 *
 * @size: size is the size of the square
 * if @size is less or 0, print a new line
 * use character # to print the sqare
 *
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar(35);
			}

			_putchar('\n');
		}

	}
}
