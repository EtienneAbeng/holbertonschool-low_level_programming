#include "main.h"
/**
 * print_rev - Prints a string, in reverse, followed a new line.
 *
 * @s: prints the string in reverse.
 */
void print_rev(char *s)
{
	int length;
	int reverse;

	for (length = 0; s[length] != '\0'; length++)
	{

	}

	for (reverse = length -1; reverse >= 0 ; reverse--)
	{
		_putchar(s[reverse]);
	}

	_putchar('\n');
}
