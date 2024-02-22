#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_to_98 - print all natural numbers from n to 98
 * Numbers must be separated by a comma, followed by a space
 * Numbers should be printed in order
 * The first printed number should be the number passed to your function
 * The last printed number should be 98
 * standard library is allowed to be used
 *
 * Return: print all natural numbers from n to 98
 */

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i < 98; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(",");
				printf(" ");
			}
		}
	}
	else if (n > 98)
	{
		for (i = n; i > 98; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(",");
				printf(" ");
			}
		}
	}

	printf("98");

	printf("\n");
}

