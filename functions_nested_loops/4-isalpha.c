#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isalpha - checks letter if is lowercase or uppercase
 * @c: The character to be checked
 *
 * Return 1 if is loercase or uppercase, 0 otherwise
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
