#include "main.h"
/**
 * Time table - A function that prints the 9 times, starting with 0)
 *
 * return : Always 0.
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
				putchar(' '); // Ajoute un espace pour la lisibilité (chiffre des unités)
				putchar(result + '0'); // Affiche le résultat en tant que caractère
			}
			else
			{
				putchar((result / 10) + '0'); // Affiche le chiffre des dizaines
				putchar((result % 10) + '0'); // Affiche le chiffre des unités
			}
			if (j < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
		
		putchar('\n');
	}
}
