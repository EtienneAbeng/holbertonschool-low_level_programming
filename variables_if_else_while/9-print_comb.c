#include <stdio.h>
/**
 * main - prints all possible combinations of single digit-digit number.
 *
 * Return: 0 (sucess).
 */

int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		putchar('0' + number);
		putchar (',');

		if (number == 9)
		{
			putchar('9' + ('$'));
		}
	}
		putchar('\n');

	return (0);
}
