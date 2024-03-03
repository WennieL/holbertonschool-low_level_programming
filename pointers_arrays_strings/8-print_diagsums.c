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
	int sum_left = 0;
	int sum_right = 0;
	int i = 0;
	int j = 0;

	while (i < size)
	{
		sum_left += a[(i * size) + j];
		i++;
		j++;
	}

	i = 0;
	j = (size - 1);

	while (j >= 0)
	{
		sum_right += a[(i * size) + j];
		i++;
		j--;
	}
	printf("%d%d", sum_left, sum_right);
}
