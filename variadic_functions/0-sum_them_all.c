#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum all of n
 * @n:intergers to be added up
 *
 * Return: the value of sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ptr;

	unsigned int sum, i;

	va_start(ptr, n);

	if (n == 0)
	{
		return (0);
	}

	sum = 0;
	i = 0;
	while (i < n)
	{
		sum += va_arg(ptr, int);
		i++;
	}

	va_end(ptr);
	return (sum);
}
