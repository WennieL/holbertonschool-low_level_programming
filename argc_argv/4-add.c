#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 * @argc: contains the number of arguments passed to the program
 * @argv: a 1D array of strings
 * a function adds positive numbers
 * followed by a new line
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i = 1;

	if (argc <= 1)
	{
		printf("0\n");
	}

	while (i < argc)
	{
		if (!isdigit(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
		i++;
	}
	return (0);
}

