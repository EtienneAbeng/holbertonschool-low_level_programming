#include "main.h"

/**
 * print_diagonal - Function that draw a diagonal line on the terminal
 *
 * @n: number of time the character \ should be printed
 * if @n is 0 or less, the function should only print a \n
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int i;
	int j;


	if (n <= 0)
	{
		_putchar ('\n');
	}

	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
