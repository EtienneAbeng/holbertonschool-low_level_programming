#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - the numbers, from 0 to 9
 *
 * don't print this number 2 and 4
 *
 *  Using _putchar twice in the code
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if ((i != '2') && (i != '4'))
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
