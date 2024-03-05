#include <stdio.h>
#include <stdlib.h>

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

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	sum *= atoi(argv[1]);
	sum *= atoi(argv[2]);

	print("%d\n, sum);

	return (0);
}
