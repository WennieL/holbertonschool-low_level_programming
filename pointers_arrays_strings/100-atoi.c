#include <stdio.h>
#include "main.h"

/**
 * _atoi - convert a strig to an interger
 * @s: the string to be converted
 *
 * Return: The interger value of the converted string
 */

int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;
	char null = 0;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;

		if (*s >= '0' && *s <= '9')
		{
			null = 1;
			num = (num * 10) + (*s - '0');
		}

		else if (null)
			break;
		s++;
	}

	if (sign < 0)
		num = (-num);

	return (num);
}
