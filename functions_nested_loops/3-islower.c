#include "main.h"
#include <ctype.h>
/**
 * _islower - Islower is a function that checks for lowercase letter.
 *
 * @c: The character to check.
 *
 * Return: 1 if 'c' is a lowercase letter, 0 otherwise.
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
