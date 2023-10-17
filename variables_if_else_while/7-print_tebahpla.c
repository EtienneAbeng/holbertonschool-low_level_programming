#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse.
 *
 * Return: 0 (Sucess).
 */

int main(void)
{
	char reverse;

	for (reverse = 'z'; reverse >= 'a'; reverse--)
	{
		putchar(reverse);
	}

	putchar('\n');

	return (0);
}
