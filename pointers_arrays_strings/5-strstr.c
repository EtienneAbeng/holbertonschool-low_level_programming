#include "main.h"
/**
 * _strstr - function that locates a substring
 * @haystack: string
 * @needle: string
 * Return: string
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*h && *n && (*h == *n))
		{
			h++;
			n++;
		}
		if (!*n)
		{
			return (haystack);
		}
		haystack++;
	}

	return (0);
}
