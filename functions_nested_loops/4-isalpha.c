#include "main.h"
#include <ctype.h>
/**
 * isalpha - A function that checks for alphabetic character.
 *
 * return: 0 (Always).
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}

	else
	{
	return (0);
	}
}
