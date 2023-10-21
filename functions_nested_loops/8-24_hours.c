#include "main.h"
#include <stdio.h>
/**
 * Jack Bauer - a function that prints every minute of day.
 *
 * Return: always 0.
 */

void jack_bauer(void)
{
	int hour;
	int minute;

	for (hour = 0; hour <= 23; hour++)
	{
		for (minute = 0; minute <= 59; minute++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');

		}
	}
}
