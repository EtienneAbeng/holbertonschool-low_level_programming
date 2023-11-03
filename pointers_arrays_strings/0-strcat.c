#include "main.h"
/**
 * strcat - Concatenates
 *
 * @dest: string destination.
 *
 * @src: the source string.
 *
 * return: A pointer.
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	/*Find the end of the string of dest*/
	for (i = 0; dest[i] != '\0'; i++)
	{

	}
	/*Concatene the string at the end of dest*/

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[j + i] = src[j];
	}

	/* Add the character NULL('\0') in end*/
	dest[i + j] = '\0';

	return (dest);
}
