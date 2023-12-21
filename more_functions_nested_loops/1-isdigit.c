#include "main.h"
#include <stdio.h>
/**
 * main - a function that checks for a digit (0 through 9)
 *
 * @c: The character to be checked.
 * Return: 1 if @c digit or otherwise.
 */
int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
