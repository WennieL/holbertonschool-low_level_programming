#include <stdio.h>
#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: Pointer to the array of integers.
 * @n: Number of elements in the array.
 */

void reverse_array(int *a, int n)
{
	int temp = 0;
	int index = 0;

	while (index < n)
	{
		temp = a[n - 1];
		a[n - 1] = a[index];
		a[index] = temp;

		index++;
		n--;
	}
}
