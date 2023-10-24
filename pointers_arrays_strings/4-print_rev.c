#include "main.h"
/**
 * Reverse - Prints a string, in reverse, followed a new line.
 *
 * @_rev prints the string in reverse
 */
void print_rev(char *s)
{
	int length;
	int reverse;

	for (length = 0; s[length] != '\0'; length++)
	{
	
	}

	for (reverse = length -1; reverse >= 0 ; reverse--)
	{
		_putchar(s[reverse]);
	}

	_putchar('\n');
}
/**int length = 0;
while(*(s + length) != '\0')
	length++;
{
	int reverse;
	for(reverse = length - 1; reverse >= '\0'; reverse--)
		printf("%c", *(s + reverse));
}
printf("\n");
}*/


