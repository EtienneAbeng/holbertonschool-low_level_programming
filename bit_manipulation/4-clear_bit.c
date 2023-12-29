#include <stdio.h>
#include "main.h"
/**
 * clear_bit - Sets the value of a bit to 0 at a given index
 * @n: Pointer to the number to clear the bit in
 * @index: The index of the bit to clear
 *
 * Return: 1 if the operation was successful, or -1 if an error occurs
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	/* Check if the index is out of bounds or if n is NULL */
	if (index >= sizeof(unsigned long int) * 8 || n == NULL)
	{
	return (-1);
	}
	/* Use bitwise AND with the complement of the bit 
 	at the specified index to set it to 0 */
	*n &= ~(1UL << index);

	return (1);
}
