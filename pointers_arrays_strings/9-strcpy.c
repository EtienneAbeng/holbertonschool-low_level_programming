#include "main.h"
#include <stdio.h>
/**
 * strcy - Copies the string pointed to by src inclued the terminating null 
 *
 * @strcy
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for(i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];	
	}

}