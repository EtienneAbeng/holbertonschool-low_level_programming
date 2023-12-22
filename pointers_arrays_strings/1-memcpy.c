#include "main.h"

/**
 * _memcpy - function copies n bytes from memory area src
 * to memory area dest
 * @src: pointer to memory to be copied
 * @dest: pointer to meort des to be filled
 * @n: constant byte
 *
 * Return: a pointer to the memory area @s
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
