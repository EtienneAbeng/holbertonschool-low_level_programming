#include "main.h"
#include <stdio.h>
/**
 * puts2 - prints every other character of a string starting 1 charaacter.
 *
 * @str: The input string +2
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}

	}
	_putchar('\n');
}
