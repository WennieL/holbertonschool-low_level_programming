#include <stdio.h>
#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: The string to search within
 * @accept: The characters to search for
 *
 * Return: The number of bytes in the initial segment of s which consist
 * only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int len = 0;
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				len++;
				break;
			}
			j++;
		}

		if (accept[j] == '\0')
		{
			break;
		}
		j = 0;
		i++;
	}
	return (len);
}


