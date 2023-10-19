#include "main.h"
#include <ctype.h>
/**
 * 3-islower - Write a function that checks for lowercase character.
 *
 * Return: 0 (always).
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
