#include <stdio.h>
/**
 * main - The alphabet in lower and upper,followed by new line.
 *
 * Return: 0 (Always).
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar(letter);	
	}
		putchar('\n');
	return (0);
}
