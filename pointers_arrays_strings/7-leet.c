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
	char *leet_chars = "aAeEoOtTlL";
	char *leet_nums = "4433007711";
	char *ptr = s;
	int i;

	while (*s)
	{
		i = 0;
		while (leet_chars[i])
		{
			if (*s == leet_chars[i])
			{
				*s = leet_nums[i];
				break;
			}
			i++;
		}
		s++;
	}
	return (ptr);
}
