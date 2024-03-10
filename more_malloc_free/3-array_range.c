#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - Creates an array of integers from min to max.
 * @min: The minimum value of the array.
 * @max: The maximum value of the array.
 *
 * Return: Pointer to the newly created array, or NULL if min > max
 *         or if malloc fails.
 */

int *array_range(int min, int max)
{
	int *ptr, i = 0;

	if (min > max)
	{
		return (NULL);
	}

	size = (max - min) + 1;
	ptr = malloc(size * sizeof(int));

	if (ptr == NULL)
	{
		return (NULL);
	}

	while (min <= max)
	{
		ptr[i] = min;
		i++;
		min++;
	}
	return (ptr);
}
