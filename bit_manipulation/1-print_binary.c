#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: The number to print in binary
 *
 * return - 
 */

void print_binary(unsigned long int n)
{
	/* Check if n is greater than 1 */
	if (n > 1)
	{
	/*Recursievely call the function to print the remaining bits*/
		print_binary(n >> 1);
	}
	
	/* Print the least significant bit of n */
	if (n & 1)
	{
		_putchar('1');
	}

	else
	{
		_putchar('0');
	}
}
