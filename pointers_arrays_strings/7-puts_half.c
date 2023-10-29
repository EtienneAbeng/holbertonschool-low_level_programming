#include "main.h"
#include <stdio.h>
/**
 * puts_half - print half of a string containing a digits.
 *
 * @str: The input string containing digits.
 */
void puts_half(char *str)
{
	int length = 0;
	int half;

	/*Calculate the length of the string.*/
	while (str[length] != '\0')
	{
		length++;
	}

	/*Calculate the starting positon for the second half.*/
	/*the starting position for the second half, from the 6th.*/
	if (length % 2 == 0)
	{
		half = (length - 1) / 2;
	}


	/*Print the second half of the string (including digits).*/
	while (str[half] != '\0')
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
