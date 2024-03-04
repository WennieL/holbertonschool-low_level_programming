#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number whose natural square root is to be calculated
 *
 * Description:
 * This function calculates and returns the
 * natural square root of the given number `n`
 * using recursion.
 * If `n` does not have a natural square root, the function returns -1.
 *
 * Return: Natural square root of `n` (integer), or -1 if `n`
 * does not have a natural square root
 */


int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0 || n == 1)
	{
		return (n);
	}

	return _sqrt_recursion_helper(n, 1, n);
}


int _sqrt_recursion_helper(int n, int start, int end)
{
	int mid = start + (end - start) / 2;
        int square = mid * mid;

	if (start > end)
	{
		return (-1);
	}

	if (square == n)
	{
		return (mid);
	}
	else if (square > n)
	{
		return _sqrt_recursion_helper(n, start, mid - 1);
	}
	else
		return _sqrt_recursion_helper(n, mid + 1, end);
}
