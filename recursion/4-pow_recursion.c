#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y
 * @x: The base value
 * @y: The exponent value
 *
 * Description:
 * This function calculates and returns the value of `x`
 * raised to the power of `y`
 * using recursion.
 * If `y` is lower than 0, the function returns -1 to indicate an error.
 *
 * Return: Result of x raised to the power of y (integer),
 * or -1 if y is less than 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
