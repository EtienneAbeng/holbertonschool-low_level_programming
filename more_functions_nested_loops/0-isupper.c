#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * isupper - A function that checks for uppercase letter.
 *
 * @c: The character to check.
 *
 * Return: 1 if is uppercase or 0 otherwise.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
