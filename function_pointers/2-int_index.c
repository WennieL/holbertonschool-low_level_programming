#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array using a comparison function.
 * @array: Pointer to the array.
 * @size: Number of elements in the array.
 * @cmp: Pointer to the function used to compare values.
 *
 * Description: This function searches for an integer in the provided array by
 *              applying the comparison function pointed to by cmp to
 *              each element. The size parameter specifies the number
 *              of elements in the array. The cmp parameter should be
 *              a function pointer that takes an integer as an argument
 *              and returns an integer. It is used to compare values
 *              in the array. The function returns the index of
 *              the first elementfor which the cmp function does not return 0.
 *              If no element matches, it returns -1. If size is less than
 *              or equal to 0, it returns -1.
 *
 * Return: Index of the first element for which cmp function
 *         does not return 0, or -1 if no match found.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size == NULL || cmp == NULL)
	{
		return (-1);
	}

	if (size <= 0)
	{
		return (-1);
	}

	while (i < size)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
