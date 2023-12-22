#include "main.h"
/**
 * _strncpy - copies at most n bytes from the string to by src to dest
 *
 * @dest: The destination.
 * @n: Max number of bytes to copy from src
 * @src: the source string.
 *
 * Return: A pointer :to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{

	char *ptr = dest;

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	while (n > 0 )
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (ptr);
}
