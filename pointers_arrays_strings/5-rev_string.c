#include "main.h"
#include <stdio.h>
/**
 * rev_string - reverses a string.
 *
 * @s: reverse a string write normaly to reverse.
 *
 * Return:  0 Always.
 */
void rev_string(char *s)
{
	int length;
	int reverse;
	int i;
	char temp;

	for (length = 0; s[length] != '\0'; length++)
	{

	}

	reverse = length - 1;

	for (i = 0; i <= length / 2; i++)
	{
		temp = s[i];
		s[i] = s[reverse];
		s[reverse--] = temp;
	}
}
