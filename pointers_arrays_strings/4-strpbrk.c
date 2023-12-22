#include "main.h"
/**
 *_strpbrk - locates a character in a string
 *@s: pointer parameter
 *@accept: pointer parameter
 *Description: count bytes
 *Return: pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int	x;
	int	y;

	for (y = 0; s[y]; y++)
	{
		for (x = 0; accept[x]; x++)
		{
			if (s[y] == accept[x])
			{
				return (&s[y]);
			}
		}
	}
	return (0);
}
