#include <stdio.h>
#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 *
 * @n: number
 * @index: index
 *
 * Return: value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit;
/* Check if the index is beyond the number of bits in the given type*/
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

/*Shift the bits to the right by the index, then use a bitwise AND 
  with 1This isolates the bit at the specified index*/
	bit = (n >> index) & 1;
	return (bit);
}
