#include <stdio.h>

/**
 * main - Entry point
 *
 * Write a program that prints the numbers
 * of base 16 in lowercase
 * followed by a new line
 *
 * can only use putchar three times in the code
 *
 * Return: Alwasy 0 (Sucess)
 *
 */

int main(void)
{
	int num;
	char ch;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');
	return (0);
}

