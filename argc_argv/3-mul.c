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
	int sum;
	int sum1, sum2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	sum1 = atoi(argv[1]);
	sum2 = atoi(argv[2]);
	sum = sum1 * sum2;

	printf("%d\n", sum);

	return (0);
}
