#include "main.h"
#include <stddef.h>
/**
 * set_bit - Sets the value of a bit to 1 at a given index
 * @n: Pointer to the number to set the bit in
 * @index: The index of the bit to set
 *
 * Return: 1 if the operation was successful, or -1 if an error occurs
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	/* Check if the index is out of bounds or if n is NULL */
	if (index >= sizeof(unsigned long int) * 8 || n == NULL)
	{
		return (-1);
	}

	/* Set the bit at the specified index to 1 using bitwise OR */
	*n |= 1UL << index;

	/* Return 1 to indicate success */
	return (1);
}
