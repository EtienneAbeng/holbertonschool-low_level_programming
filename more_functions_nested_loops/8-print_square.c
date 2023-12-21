#include "main.h"
#include <stdio.h>
/**
 * print_square - function that prints a square
 *
 * @size: is 0 or less, the function should print only a new line
 * @#: Use the character # to print the sqaure
 *
 * Return: Always 0.
 */
void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
