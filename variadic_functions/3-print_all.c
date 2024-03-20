#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 *
 * Return: (void)
 */

void print_all(const char * const format, ...)
{
	va_list args;
	const char *ptr = format;
	char *str;
	int comma = 0;

	va_start(args, format);
	while (ptr && *ptr)
	{
		if (comma)
			printf(", ");
		switch (*ptr)
		{
			case 'c':
				printf("%c", (char)va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", (float)va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char*);
				if (str == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
			default:
				comma = 0;
				ptr++;
				continue;
		}
		ptr++;
		comma = 1;
	}
	va_end(args);
	printf("\n");
}
