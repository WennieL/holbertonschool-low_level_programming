#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_last_digit - returns the last digit of a number
 * @n: The number whose last digit is to be returned
 *
 * Return: The last digit of the absolute value of @n
 */


int print_last_digit(int n)
{
	int x;

	if (n == 0)
	{
		return 0;
	}
	else
	{
		x = abs(n) % 10;
		return '0' + x;
	}
}
