#include <stdio.h>
#include "main.h"

/**
 * add - Adds two intergers and prints the result
 * @a: The first integer
 * @b: The second integer
 *
 * Return: @result with sum of two intergers
 *
 */

int add(int a, int b)
{
	int result;

	result = a + b;

	if (result < 10)
	{
		_putchar(result + '0');
	}
	else
	{
		_putchar((result / 10) + '0');
		_putchar((result % 10) + '0');

	}
	return (result);
	_putchar('\n');
}
