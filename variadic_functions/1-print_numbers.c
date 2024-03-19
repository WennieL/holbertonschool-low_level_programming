#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: a string to be printed between numbwers
 * @n: number of intergers passed to the funciton
 *
 * Return: (0) Success
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;

	unsigned int i, num;

	va_start(args, n);

	i = 0;
	while (i < n)
	{
		num = va_arg(args, int);
		printf("%d", num);

		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}

		i++;
	}
	va_end(args);
	printf("\n");
}
