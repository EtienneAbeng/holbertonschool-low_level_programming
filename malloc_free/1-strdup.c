#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_strdup - function that return a poiter to newly allocated space in memory
 * which contains a copy of the string.
 *
 * @str: the string de @str is duplicate
 *
 * @malloc: Memory of the new string is obtained with that
 * @free: the memeory is freed
 *
 * Return: NULL if insufficent memory or return a pointer
 */
char *_strdup(char *str)
{
	char *duplic;
	unsigned int length;
	unsigned int i;

	if (str == NULL)
	{
		return (NULL);
	}

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}

	/* length + 1: Pour garantir que nous avons assez d'espace pour stocker */
	/* tous les caractères de la chaîne, nous ajoutons 1 pour inclure */
	/*  le caractère nul de fin de chaîne ('\0').*/
	 duplic = (char *) malloc(sizeof(char) * (length + 1));

	if (duplic == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= length; i++)
	{
		duplic[i] = str[i];
	}

	duplic[i] = '\0';

	return (duplic);
}
