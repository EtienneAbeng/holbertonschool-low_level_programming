#include "main.h"
/**
 * main - prints the alphabet, in lowercase.
 *
 * return: O (sucess).
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
