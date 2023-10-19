#include "main.h"
/**
 * main - write a function that prints 10 times the alphabet in lowercase.
 *
 * return: 0 (always).
 */

void print_alphabet_x10(void)
{
	int number;
	char alphabet;

	for (number = 1; number <= 10; number++)
	{
		
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		
		_putchar('\n');
	}
}

