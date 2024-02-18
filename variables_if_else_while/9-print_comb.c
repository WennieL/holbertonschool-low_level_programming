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
	int num;

	for (num = 0; num < 10; num++) 
	{
		putchar(num + '0');
		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
