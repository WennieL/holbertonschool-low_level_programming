#include <stdio.h>
#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 *
 * Description: This function reverses the characters in the given string
 * pointed to by 's' in place.
 */

void rev_string(char *s)
{
	char *start = s;
	char *end = s;

	while (*end != '\0')
	{
		end++;
	}

	/* Move end back to the last charbefore the null terminator*/
	end--;

	while (start < end)
	{
		char temp;

		temp = *start;
		*start = *end;
		*end = temp;

		start++;
		end--;
	}
}
