#include <stdio.h>
#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: The number to be checked
 *
 * Description: This function checks the sign of the input number @n
 * If @n is greater than zero, it prints '+' and returns1.
 * If @n is zero, it prints '0' and returns 0.
 * If @n is less than zero, it prtins '-' and returns -1.
 *
 * Return: 1 if @n is greater than zero,
 * 0 id @ n is zero,
 * -1 if !n is less than zero
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
