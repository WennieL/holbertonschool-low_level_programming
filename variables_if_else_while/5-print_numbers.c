#include <stdio.h>

/**
 * main - Entry point
 *
 * write a program that prints all single digit numbers
 * of base 10 starting from 0
 * followewd by a new line
 *
 * Return: Alwasy 0 (Sucess)
 *
 */

int main(void)
{
	int number = 0;

	while (number < 10)
	{
		printf("%d", number);
		number++;
	}

	printf("\n");
	return (0);
}
