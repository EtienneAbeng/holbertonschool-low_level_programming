#include <stdio.h>
/**
 * main - prints all numbers of base 16 in lowercase.
 *
 * Return: 0 (Sucess).
 */

int main(void)
{
	char number;
	char alphabet;

	for (number = 0; number <= 9; number++)
	{
		putchar('0' + number);
	}

	for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
	{
		putchar(alphabet);
	}

		putchar('\n');

	return (0);
}
