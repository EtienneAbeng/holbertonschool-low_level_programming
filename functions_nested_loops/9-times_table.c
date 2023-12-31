#include "main.h"

/**
 * times_table - Prints the multiplication table for 9, starting from 0
 *
 * Description: This function displays the result of multiplying numbers
 * from 0 to 9 by each other in a tabular format. The result is printed to
 * the standard output. The function takes no arguments and returns void.
 */
void times_table(void)
{
	int i, j, m;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			m = i * j;
			if (j != 0)
			{
			_putchar(',');
			_putchar(' ');
			}
			if (m < 10)
			{
				if (j != 0)
				{
					_putchar(' ');
				}
				_putchar(m + '0');
			}
			else
			{
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
