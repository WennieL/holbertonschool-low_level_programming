#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * is_upper - checks if character is uppercase
 * @c: The character to be checked
 *
 * Return: 1 if @c is uppercase, 0 otherwis
 *
 * Description: This function checks whether the character @c
 * is an uppercase letter or not. It returns 1 if @c is uppercase,
 * and 0 otherwise. It is similar to the standard library function isupper()
 *
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
