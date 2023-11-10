#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/*
 * string_concat - concatenates two string,
 * the entiere first string and n chars from the second string
 *
 * @s1: first string
 * @s2: second string
 *
 * @n: numbers of chars to concatenate from the second string
 *
 * Return: pointer to be new string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len1, len2, i, j;

	/* If s1 is NULL, treat it as an empty string */
	if (s1 == NULL)
		s1 = "";

	/* If s2 is NULL, treat it as an empty string */
	if (s2 == NULL)
		s2 = "";

	/* Calculate the length of s1 */
	for (len1 = 0; s1[len1] != '\0'; len1++)
		;

	/* Calculate the length of s2 */
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;
	/* Allocate memory for the concatenated string */
	concat = malloc((len1 + n + 1) * sizeof(char));

	/* Check if memory allocation was successful */
	if (concat == NULL)
		return (NULL);

	/* Copy s1 to concat */
	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	/* Copy the first n bytes of s2 to concat */
	for (j = 0; j < n && s2[j] != '\0'; j++, i++)
		concat[i] = s2[j];

	/* Add null terminator at the end */
	concat[i] = '\0';

	return (concat);
}
