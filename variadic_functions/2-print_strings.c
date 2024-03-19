#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 *
 * Return: (void)
 */


void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);
	i = 0;

	while (i < n)
	{
		str = va_arg(args, char*);

		if (str)
		{
			printf("%s", str);

			if (separator && i < (n - 1))
			{
				printf("%s", separator);
			}
		}
		else
		{
			printf("(nil)");
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
