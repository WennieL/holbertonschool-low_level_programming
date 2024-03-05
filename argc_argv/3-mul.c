#include <stdio.h>

/**
 * main - Entry point
 * @argc: contains the number of arguments passed to the program
 * @argv: a 1D array of strings
 * a function that multiplies two numbers
 * followed by a new line
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int sum = 1;
	int i = 1;

	if (i < argc)
	{
		sum *= atoi(argv[i]);
		i++;
	}
	else if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
