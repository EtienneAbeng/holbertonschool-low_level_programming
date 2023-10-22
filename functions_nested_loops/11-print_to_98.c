#include "main.h"
#include <stdio.h>
/**
 * 98 Battery street - a function printd all natural numbers from n to 98.
 *
 * Return: Always 0.
 */

void print_to_98(int n)
{
	int number;

	if (n == 98)
	{
		printf("98\n");
	}
	else if (n < 98)
	{
		for (number = n; number <= 98; number++)
		{
			printf("%d", number);
			if (number < 98)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
	else
	{
		for (number = n; number >= 98; number--)
		{
			printf("%d", number);
			if (number > 98)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
}
