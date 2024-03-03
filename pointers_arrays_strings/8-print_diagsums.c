#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_diagsums - Prints the sums of the diagonals of a square matrix
 * @a: Pointer to the first element of the matrix
 * @size: Size of the square matrix
 *
 * Description: This function calculates and prints
 * the sums of the two diagonals
 * of a square matrix. The matrix is represented as a 1D array.
 */

void print_diagsums(int *a, int size)
{
	int i = 0;

	while (i < size)
	{
		int j = 0;

		printf("{");

		while (j < size - 1)
		{
			printf("%d, ", *a);
			j++;
			a++;
		}
		if (j == size - 1)
		{
			printf("%d}", *a);
			a++;
		}

		printf(",");
		printf("\n");
		i++;
	}
}
