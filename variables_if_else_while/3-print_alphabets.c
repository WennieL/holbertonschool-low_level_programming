#include <stdio.h>

/**
 * main - Entry point
 *
 * write a program that prints the alphabet in lowevase,
 * and then in uppercase,
 * followed by a new line
 *
 * can only use the putchar function
 * and putchar can only be used three times in the code
 *
 * Return: Alwasy 0 (Sucess)
 *
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');

	return (0);
}
