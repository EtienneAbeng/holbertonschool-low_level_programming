#include "main.h"
/**
 * _strcmp - A function that compares two strings.
 *
 *
 *
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0') && (*s2 != '\0'))
	{
		if (*s1 < *s2)
		{
			return (-1);
		}

		else if(*s1 > *s2)
		{
			return (1);
		}
		s1++;
		s2++;
	}

	if ((*s1 == '\0') && (*s2 == '\0'))
	{
		return (0);
	}

	else if (*s1 == '\0')
	{
		return (-1);
	}

	else
	{
		return (1);
	}
}
