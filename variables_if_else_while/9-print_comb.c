#include <stdio.h>

/**
 * main - Entry point
 *
 * Write a program that prints all possible combinations
 * of single digit numbers
 * numebrs must be separated by , followed by a space
 * numbers should be printed in ascending order
 * can only use putchar function four times in the code
 *
 * Return: Always 0 (Sucess)
 *
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num + '0');
		putchar(',');
		putchar(' ');
		num++;
	}

	putchar('\n');
	return (0);
}
