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
	int i, j, result;
	
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = i * j;

			/* Format the output based on the value of 'result' */
			if (result < 10)
			{
				if (j > 0)
				{
					_putchar(' ');
					_putchar(' '); /* Add spaces for alignment (units digit) */
				}
				_putchar(result + '0'); /* Display the result as a character */
			}
			else
			{
				_putchar((result / 10) + '0'); /* Display the tens digit */
				_putchar((result % 10) + '0'); /* Display the units digit */
			}
			/* Add comma and space if not at the end of the line */
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n'); /* Move to the next line after each row */
	}
}
