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
	char lower = 'a';
	char upper = 'A';

	while (lower <= 'z' || upper <= 'Z')
	{
		if (lower <= 'z')
		{
			putchar(lower);
			lower++;
		}
		if (upper <= 'Z')
		{
			putchar(upper);
			upper++;
		}
	}
	putchar('\n');
	return (0);
}
