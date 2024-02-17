#include <unistd.h>
#define MESSAGE "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"

/**
 * main - Entry points
 *
 * Write a C program that prints exactly and that piece of art is useful
 * - Dora Korpar, 2015-10-19, followed by a new line, to the standard error.
 *
 *   Return: Always 1 (Sucess)
 *
 */

int main(void)
{
	write(2, MESSAGE, sizeof(MESSAGE) - 1);

	return (1);
}
