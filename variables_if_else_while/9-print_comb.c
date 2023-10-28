#include <stdio.h>
/**
 * main - prints all possible combinations of single digit-digit number.
 *
 * Return: 0 (sucess).
 */
int main(void)
{
	char number = 0;

	while (number <= 9)
	{
		putchar('0' + number);
		if (number < 9)
		{
			putchar(',');
			putchar(' ');
		}
		number++;
	}
	putchar('\n');

	return (0);
}
