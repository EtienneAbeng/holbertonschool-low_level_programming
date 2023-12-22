#include "main.h"
/**
 * cap_string - function that capitalizes all words of a string
 * @s: string to work on
 * Return: captilased string
 */
char *cap_string(char *s)
{
	int ln = 0;
	int i;

	while (s[ln] != '\0')
	{
		ln++;
	}
	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[0] = s[0] - 32;
	}

	if (ln > 0)
	{	
		for (i = 1; i < ln; i++)
		{
			if (s[i] == ',' || s[i] == ';' || s[i] == '.' || s[i] == '!'
					|| s[i] == '?' || s[i] == '"' || s[i] == '(' || s[i] == ')' 
					|| s[i] == '{' || s[i] == '}' || s[i] == '\n' || s[i] == ' ' || s[i] == 9)
			{

				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + 1] = s[i + 1] - 32;
				}
			}
		}
	}
	return (s);
}
