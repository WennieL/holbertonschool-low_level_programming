#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * _isupper - Checks if a character is uppercase.
 * @c: The character to be checked.
 *
 * Return: 1 if @c is uppercase, 0 otherwise.
 *
 * Description: This function checks whether the character @c
 * is an uppercase letter or not. It returns 1 if @c is uppercase,
 * and 0 otherwise. It is similar to the standard library function
 * isupper(). For more information, refer to the man page by running
 * 'man isupper' in the terminal.
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
