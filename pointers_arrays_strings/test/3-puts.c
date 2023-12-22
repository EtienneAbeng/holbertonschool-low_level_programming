#include "main.h"
#include <stdio.h>
/**
 * _puts - prints a string, folowed by anew line.
 * @str: The string to be printed.
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
