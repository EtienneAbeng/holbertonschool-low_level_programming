#include "main.h"
/**
 * Time table - A function that prints the 9 times, starting with 0
 *
 * return: void.
 */
void times_table(void)
{
	int i, j;
	for (i = 0; i <= 9; i++) 
	{
		for (j = 0; j <= 9; j++)
		{
			int result = i * j;
			
			if (result < 10)
			{
				_putchar(' '); /* Ajoute un espace pour la lisibilité (chiffre des unités)*/
				_putchar(result + '0'); /* Affiche le résultat en tant que caractère*/
			}
			else
			{
				_putchar((result / 10) + '0'); /*Affiche le chiffre des dizaines*/
				_putchar((result % 10) + '0'); /* Affiche le chiffre des unités*/
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
