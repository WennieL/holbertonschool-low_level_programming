#include <stdio.h>
#include "main.h"

/**
 * factorial - Returns the factorial of a given number
 * @n: The number whose factorial is to be calculated
 *
 * Description:
 * This function calculates and returns the factorial of the given number `n`.
 * If `n` is lower than 0, the function returns -1 to indicate an error.
 * The factorial of 0 is defined as 1.
 *
 * Return: Factorial of `n` (integer), or -1 if `n` is less than 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
