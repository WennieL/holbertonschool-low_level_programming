#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Javk Bauer
 * starting from (00:00 to 23:59)
 * @c: the number of every minute is to be returned
 *
 * Return: The every minute of the day of @c
 *
 */

void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			_putchar(hour / 10);
			_putchar(hour % 10);
			_putchar(':');
			_putchar(minute / 10);
			_putchar(minute % 10);
			_putchar('\n');
		}
	}
}
