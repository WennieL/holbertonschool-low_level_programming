#include <stdio.h>
#include "main.h"

/**
 * print_chessboard - Prints the chessboard represented
 * by a 2D array of characters
 * @a: The 2D array representing the chessboard
 *
 * Description: This function takes a 2D array of characters
 * representing a chessboard and prints it to the standard
 * output, row by row, followed by a newline
 * character after each row.
 */

void print_chessboard(char (*a)[8])
{
	int i = 0;

	while (i < 8)
	{
		int j = 0;

		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}

		_putchar('\n');
		i++;
	}
}
