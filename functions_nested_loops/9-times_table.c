#include <stdio.h>
#include "main.h"

/**
 * times_table - prints the 9 times table
 * starts with 0
 *
 * Return: print @result
 *
 */

void times_table(void)
{
	int i, j, result;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');

		for (j = 1; j < 10; j++)
		{
			result = i*j;

			_putchar(',');
			_putchar(' ');

			if (result < 10)
			{
				_putchar(' ');
				_putchar(result + '0');

			}
			else
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
		}

		_putchar('\n');
	}
}





			


