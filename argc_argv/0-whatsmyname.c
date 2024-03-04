#include <stdio.h>

/**
 * main - Entry point
 * a function that prints its name
 * followed by a new line
 */

int main(int argc, char *argv[])
{
	int i = 0;

	if(i < argc)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
