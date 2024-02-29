#include <stdio.h>
#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: if @s1 is less than @s2, prints -, + otherwise.
 * prints 0 if @s1 euals to @s2
 */

int _strcmp(char *s1, char *s2)
{
	int s1_len = 0;
	int s2_len = 0;

	while (s1[s1_len] != '\0')
	{
		s1_len++;
	}

	while (s2[s2_len] != '\0')
	{
		s2_len++;
	}

	if (s1_len < s2_len)
	{
		return (-15);
	}
	else if (s1_len > s2_len)
	{
		return (15);
	}
	else
		return (0);
}
