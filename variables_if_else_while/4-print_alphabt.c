#include <stdio.h>

/**
 * main - Entry point
 *
 * write a program that prints the alphabet
 * in lowercse, followed by a new line.
 * print all the letters except q and e
 * can only use putchar
 * putchar can only be used twice in the code
 *
 * Return: Always 0 (Sucess)
 *
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'q' || ch == 'e')
		{
			continue;
		}

		putchar(ch);
	}

	putchar('\n');
	return (0);
}
