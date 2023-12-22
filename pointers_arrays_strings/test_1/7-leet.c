#include "main.h"
#include <stdio.h>
/**
  * leet - Encodes a string into 1337
  * @s: The string to encode
  *
  * Return: The encoded string
  */
char *leet(char *s)
{
	int i;
	int j;
	char letre[5] = {'A', 'E', 'O', 'T', 'L'};
	char chifre[5] = {'4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == letre[j] || s[i] - 32 == letre[j])
			{
				s[i] = chifre[j];
			}
	
		}
	}
	return (s);

}
