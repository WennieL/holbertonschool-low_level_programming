#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * FizzBuzz - print numbers from 1 to 100
 * @num: check if @num can be divided by 3 or 5
 *
 * Description: check if num can be divided by 3 or 5
 * If @num is multiples of three, print Fizz
 * If @num is mutliples of five, print Buzz
 * If @num is mutliples of three and five, print FizzBuzz
 * otherwise, prints @num
 *
 * Return: void
 *
 */

void fizzBuzz(int num)
{
	int i;

	for (i = 1; i <= num; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("FizzBuzz");
			printf(" ");

		}
		else if ((i % 3) == 0)
		{
			printf("Fizz");
			printf(" ");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz");
			printf(" ");
		}
		else
		{
			printf("%d", i);
			printf(" ");
		}
	}
}

int main(void)
{
    fizzBuzz(100);
    return (0);
}
