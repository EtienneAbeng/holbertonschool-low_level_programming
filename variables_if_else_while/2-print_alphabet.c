#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase, followed by new line.
 *
 * Return: 0 (Amlways).
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
		putchar('\n');

	return (0);
}
