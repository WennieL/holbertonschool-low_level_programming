#include <stdio.h>

/**
 * main - Entry point
 * @argc: contains the number of arguments passed to the program
 * @argv: a 1D array of strings
 * a function that prints its name
 * followed by a new line
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i = 0;

	if (i < argc)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
