#include <stdio.h>

/**
 * main - Entry point
 *
 * write a program that prints all single digit numbers
 * of base 10 starting from 0
 * followed by a new line
 *
 * not allowed to use type char and putchar
 * can only use putchar twice in the code
 *
 * Return: Always 0 (Sucess)
 *
 */

int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		putchar(number + '0');
	}

	putchar('\n');
	return (0);
}
