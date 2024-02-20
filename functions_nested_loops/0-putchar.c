#include <unistd.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Write a program that prints _putchar
 * followed by a new line
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int i;
	char letter[9] = "_putchar";

	for (i = 0; i < 9; i++)
	{
		_putchar(letter[i]);
	}

	putchar('\n');

	return (0);
}
