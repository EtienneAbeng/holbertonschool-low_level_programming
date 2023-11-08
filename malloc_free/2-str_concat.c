#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Function that concatenates two strings.
 *
 * @s1: The first string.
 * @s2: The second string to concatenate to s1.
 *
 * Return: NULL if s1 or s2 is NULL or if memory allocation fails.
 * Return: A pointer to a newly-allocated space in memory containing
 * the concatenated string.
 */
char *str_concat(char *s1, char *s2)
{
       	unsigned int len_s1 = 0;
	unsigned int len_s2 = 0;
	unsigned int i, j;
	char *concatenated;

	if (s1 == NULL) 
	{
		s1 = (char *)malloc(sizeof(char) * 1);
		if (s1 == NULL) 
		{
			return (NULL);
		}
		s1[0] = '\0';
	} 
	
	else 
	{
		while (s1[len_s1] != '\0') 
		{
			len_s1++;
		}
		
		while (s2[len_s2] != '\0') 
		{
			len_s2++;
		}
	}
		concatenated = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1));
		
		if (concatenated == NULL) 
		{
			return (NULL); 
		}
		
		for (i = 0; i < len_s1; i++) 
		{
			concatenated[i] = s1[i];
		}
		
		for (j = 0; j < len_s2; j++) 
		{
			concatenated[i + j] = s2[j];
		}
		
		concatenated[i + j] = '\0';  
		
		return (concatenated);
}
