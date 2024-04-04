#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * binary_to_unit - coverts a binary number to an unsigned int
 * @b: pointer points to a string of 0 and 1 chars
 *
 * Description: This header file contains a function binary_to_uint
 * that converts a binary number represented as a string of
 * '0' and '1' characters to an unsigned integer.
 * The function takes a pointer b pointing to the binary string as input
 *
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is Null
 *
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 1, n = 0;
	int len = 0;

	if (b == NULL)
		return (0);

	while (b[len] != '\0')
		len++;

	len -= 1;

	while (len >= 0)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		n += (b[len] - '0') * i;
		i *= 2;
		len--;
	}
	return (n);
}
