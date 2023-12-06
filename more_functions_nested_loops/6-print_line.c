#include "main.h"

/**
 * print_line - function draws a straight line in the termional
 *
 * @_putchar: function to print
 * @n: print the number of times the character '_'
 * @n: is 0 or less, the function print only \n
 *
 * Return: Always 0.
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
	       	{
			_putchar('\n');
		}
		_putchar('_' + 0);
	}
	_putchar('\n');
}
