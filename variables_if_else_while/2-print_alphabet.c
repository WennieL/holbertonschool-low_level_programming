#include <stdio.h>

/**
 * main - Entry point
 *
 * Write a program that prints the aplhabet
 * in lowercase, followed by a new line.
 *
 * can only use the putchar function
 * and putchar can only be used twice in the code
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		putchar('\n');
		ch++;
	}

	return (0);
}
