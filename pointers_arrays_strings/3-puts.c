#include "main.h"
#include <stdio.h>
/**
 * Fear - prints a string, followed by new line, to stdout
 *
 * @_puts for prints the strings.
 *
 * Return : Always 0.
 */
void _puts(char *str)
{
int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		_putchar(str[index]);
	}

	_putchar('\n');
}
