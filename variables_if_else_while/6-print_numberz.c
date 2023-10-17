#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10
 *
 * Return: 0 (Always).
 */

int main(void)
{
	int numberz;

	for (numberz = 0; numberz < 10; numberz++)
	{
		putchar('0' + numberz);
	}

		putchar('\n');

		return (0);
}
