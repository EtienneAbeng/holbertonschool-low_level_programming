#include "main.h"

/**
 * flip_bits - return the number of bits you would need to flip to get from
 * one number to another
 *
 * @n: number
 * @m: other number
 *
 * Return: the number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	/* XOR of n and m to find differing bits */
	unsigned long int xor_result = n ^ m;
	unsigned int bit_count = 0;

	/* Iterate through bits using Brian Kernighan's Algorithm */
	while (xor_result)
	{
		/* Clear the rightmost set bit */
		xor_result &= (xor_result - 1);
		bit_count++;
	}
	
	return (bit_count);
}
