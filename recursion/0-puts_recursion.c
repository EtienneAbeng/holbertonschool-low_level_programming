#include "main.h"
/**
 * _puts_recursion - A fonction that prints a string.
 *
 * @puts: Prints the string.
 * @s: prints the string.
 * return always (0);
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

}
