#include <stdio.h>

/**
 * main - Entry point
 *
 * Write a program that prints the lowercase alphabet
 * in reverse, followed by a new line
 *
 * can only use putchar twice in the code
 *
 * Return: Alwasy 0 (Sucess)
 *
 */

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}

	putchar('\n');
	return (0);
}
