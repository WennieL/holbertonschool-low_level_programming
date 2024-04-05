#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * get_bit - Retrieves the value of a bit at a given index.
 * @n: The unsigned long integer from which to retrieve the bit.
 * @index: The index of the bit to retrieve, starting from 0.
 *
 * Description: This function returns the value of the bit at the specified
 * index in the binary representation of the number 'n'. If the index is out of
 * bounds, the function returns -1 to indicate an error.
 *
 * Return: The value of the bit at the specified index (0 or 1), or -1 if an
 * error occurred (index out of bounds).
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return ((n >> index) & 1);
}
