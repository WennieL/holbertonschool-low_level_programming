#include <stdio.h>

/**
 * main - Entry point
 * @argc: contains the number of arguments passed to the program
 * @argv: a 1D array of strings
 * a function that prints the number of argv
 * followed by a new line
 * Return: 0 (Success)
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
