#include "main.h"
/**
 * _strcat - Function similar to the _strcat except that use most byte.
 *
 * @dest: The destination of string.
 * @src: does not need to be null if it contains n or more bytes.
 *
 * Return - a pointer to the resulting string @dest
 */
char *_strncat(char *dest, char *src)
{
        char *ptr = dest;

        /*Find the end of the string of destination)*/

        while (*dest != '\0')
        {
                dest++;
        }

        /* Concatenate  of string @src*/

        while (*src != '\0')
        {
                *dest = *src;
                dest++;
                src++;
        }

        /*Check the @dest destination is null is found.*/
        *dest = '\0';

        return (ptr);
}
