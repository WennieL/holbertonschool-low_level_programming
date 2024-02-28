#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * followed by a new line
 *
 * @n: is the number of elements of the array to be printed
 * numbers must be separated by comma, followed by a space
 * numbers should be displayed in the same order
 * as they are stored in the array
 *
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		/* (n-1) becasue index starts from 0, this runs 0-4 times*/
		if (i != n - 1)
		{
			printf("%d, ", a[i]);
		}

		else
		{
			printf("%d", a[i]);
		}
		i++;
	}

	printf("\n");
}
