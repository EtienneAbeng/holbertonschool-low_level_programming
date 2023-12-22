#include "main.h"
/**
 * print_last_digit - A function that print the last digit of a number.
 *
 * @n: the number to extract the last digit.
 *
 * Return: the value of the last digit.
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		n = -n;

		_putchar('0' + n % 10);
	}

	return (n % 10);
}
