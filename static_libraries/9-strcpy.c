#include "main.h"
#include <stdio.h>
/**
 * _strcpy - Copies the string pointed to by src inclued the terminating null.
 *
 * @dest: The destination.
 *
 * @src: The source string.
 *
 * return - Pointer return the string that find in  @dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	/* return if no memory is allocated to the destination*/
	if (dest == NULL)
	{
		return (NULL);
	}
	/*Copy the string pointed by source into the array pointed by dest*/
	while (src[i] != '\0')
	{
		dest[i] = src[i];

		i++;
	}
	/* include the terminated null character.*/
	/* En placant *dest = '\0'; en dehors de la boucle, nous nous assurons*/
	/* que la destination contient une chaine de caractere correctement*/
	/* que la chaîne résultante soit valide et que les fonctions de*/
	/* manipulation de chaine puissent fonctionner correctement avec*/
	/* la manipulation */

	dest[i] = '\0';

	return (dest);
}
