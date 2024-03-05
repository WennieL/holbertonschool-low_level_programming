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
	int i = 0;
	int sum = 0;
	int j = 0;

	if (argc < 1)
	{
		printf("0\n");
	}

	while (i < argc)
	{
		while (argv[i][j] != '\0')
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum += atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
