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
	int i;
	int j;
	int result;
	
	for (i = 0; i <= 9; i++) 
	{
		for (j = 0; j <= 9; j++)
		{
			result = i * j;

			if (result < 10)
			{
				if (result < 10)
				{
				/* Ajoute un espace pour la lisibilité (chiffre des unités)*/
				_putchar(' ');
				_putchar(' ');
				}
				_putchar (0);
				/* Affiche le résultat en tant que caractère*/
				_putchar(result + '0');
			}
			else
			{
				 /*Affiche le chiffre des dizaines*/
				_putchar((result / 10) + '0');
				/* Affiche le chiffre des unités*/
				_putchar((result % 10) + '0');
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		
		_putchar('\n');
	}
}
