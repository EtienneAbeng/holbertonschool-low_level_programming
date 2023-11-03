#include "main.h"
/**
 * _strncat - Function similar to the _strcat except that use most byte.
 *
 * @dest: The destination of string.
 * @src: does not need to be null if it contains n or more bytes.
 * @n: contains one ou more bytes.
 *
 * Return - a pointer to the resulting string @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	/*Find the end of the string of destination)*/

	while (*dest != '\0')
	{
		dest++;
	}

	/* Concatenate jusqu a @n characteres of string @src*/

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	/*Check the @dest destination is null is found.*/
	*dest = '\0';

	return (ptr);
}
