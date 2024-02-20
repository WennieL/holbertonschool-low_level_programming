#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isalpha - checks if a charcter is an
 * alphabetic character (a letter)
 * @c: The character to be checked
 *
 * Return 1 if the character is an alphabetic character, 0 otherwise
 *
 */

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
		return (0);
}
