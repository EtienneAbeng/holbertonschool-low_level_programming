#include "main.h"
/**
 * print_alphabet- prints the alphabet, in lowercase.
 *
 * return: void.
 */

void print_alphabet(void)
{
	char alpha;

	alpha = 'a';

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}

	_putchar('\n');
}
