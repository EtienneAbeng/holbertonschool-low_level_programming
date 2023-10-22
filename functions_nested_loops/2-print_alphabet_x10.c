#include "main.h"
/**
 * print_alphabet - Prints the alphabet in lowercase 10 times.
 *
 * Return: void
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

