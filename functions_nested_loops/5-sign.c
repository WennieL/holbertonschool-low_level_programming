#include <stdio.h>
#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @c: The number to be checked
 *
 * Description: This function checks the sign of the input number @n
 * If @c is greater than zero, it prints '+' and returns1.
 * If @c is zero, it prints '0' and returns 0.
 * If @c is less than zero, it prtins '-' and returns -1.
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
