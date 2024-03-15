#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - Executes a function on each element of an array.
 * @array: Pointer to the array.
 * @size: Size of the array.
 * @action: Pointer to the function to be executed on each element.
 *
 * Description: This function iterates through the elements
 *              of the provided array and executes the function
 *              pointed to by the parameter action on each element.
 *              The size parameter specifies the number of elements
 *              in the array. The action parameter should be a function
 *              pointer that takes an integes as an argument and returns
 *              void. This function will be applied to each
 *              element of the array in sequence.
 *
 * Return: None.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i = 0;

	if (array == NULL || action == NULL)
	{
		return;
	}

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
