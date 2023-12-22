#include "main.h"

/**
 * _strspn - prints the consecutive caracters of s1 that are in s2.
 * @s: source string
 * @accept: searching string
 *
 * Return: new string.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				count++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (count);
		}
		s++;
	}
	return (count);
}
