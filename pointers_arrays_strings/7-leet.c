#include <stdio.h>
#include "main.h"

/**
 * leet - a function that encodes a string into 1337
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 *
 * @s: An input string
 * Return: a string
 */

char *leet(char *s)
{
	int i = 0;
	char n = '0';

	while (s[i] != '\0')
	{
		if (s[i] == 'a' || s[i] == 'A')
		{
			s[i] = n + 4;
		}

		else if (s[i] == 'e' || s[i] == 'E')
		{
			s[i] = n + 3;
		}

		else if (s[i] == 'o' || s[i] == 'O')
		{
			s[i] = n + 0;
		}

		else if (s[i] == 't' || s[i] == 'T')
		{
			s[i] = n + 7;
		}

		else if (s[i] == 'l' || s[i] == 'L')
		{
			s[i] = n + 1;
		}

		i++;
	}
	return (s);
}
