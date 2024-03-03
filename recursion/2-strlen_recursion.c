#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string recursively
 * @s: Pointer to the string whose length is to be calculated
 *
 * Description:
 * This function calculates and returns the length of the string `s`
 * using recursion.
 *
 * Return: Length of the string (integer)
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
