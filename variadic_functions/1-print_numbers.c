#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Print numbers with a separator.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: The integers to print.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	/* Declaration of the variable argument list */
	va_list printNumbers;
	unsigned int i;

	/* Initialize the list starting from the last fixed argument */
	va_start(printNumbers, n);

	for (i = 0; i < n; i++)
	{
		/* Print the current integer */
		printf("%d",va_arg (printNumbers, int));
		/* French : Si l'entier n'est pas le dernier (i < n - 1) et 
		 un séparateur est fourni, imprime le séparateur avec printf("%s", separator).*/
		if (i < n - 1 && separator != NULL)
		{
			/* Print the separator if not the last element */
			printf("%s", separator);
		}

	}
	printf("\n");

	va_end(printNumbers);
}
