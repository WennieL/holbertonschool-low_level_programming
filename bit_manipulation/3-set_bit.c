#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: A pointer to the input number.
 * @index: The index of the bit to set, starting from 0.
 *
 * Description: This function sets the bit at the specified index to 1 in the
 * number pointed to by 'n'. If the index is out of bounds,
 * the function returns -1 to indicate an error. Otherwise,
 * it returns 1 to indicate success.
 *
 * Return: 1 if successful, -1 if an error occurred.
 */

int set_bit(unsigned long int *n, unsigned int index)
{

	if (index > sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	else
	{
		*n = *n | (1 << index);
		return (1);
	}
}
