#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * This porgram will assign a random number to the variable n each time
 * the ourput of the program should be 
 * the string Last digit of, followed by
 * n, followed by
 * the string is, followed by
 * if n is greater than 5 - the string and is greater than 5
 * if n is 0 - the string and is 0
 * if n less than 6 and not 0 - the string and is less than 6 and not 0
 * followed by a new line 
 *
 * Return: Always (0)
 *
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	int lastDigital = n[0];

	if (lastDigital > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDigital);
	}
	else if (lastDigital == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastDigital);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDigital);
	}

	return (0);
}
