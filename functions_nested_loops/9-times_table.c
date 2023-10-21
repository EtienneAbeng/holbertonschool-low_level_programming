#include "main.h"
/**
 * Time table - A function that prints the 9 times, starting with 0)
 *
 * return : Always 0.
 */
void times_table(void)
{
	int table;
	int number;
	int result;

	for (table = 0; table < 9; table++)
	{
		for (number = 0; number < 9; number++)
		{
			if (result = table * number)
			{
				_putchar(result + '0');
				
				_putchar(';');
			}
			_putchar(number + '0');

			_putchar(table + '0');

		}
	}
}
