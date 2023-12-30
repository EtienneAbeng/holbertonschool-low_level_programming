#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Print strings with a separator.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 * @...: The strings to print.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	unsigned int i;
	const char *current_str;

	va_start(string, n);  /* Initialize the argument list starting from the last fixed argument */

	for (i = 0; i < n; i++)
	{
		/* Get the current string from the argument list */
		current_str = va_arg(string, const char *);

		/* Print the current string if it's not NULL */
		if (current_str != NULL)
		{
			printf("%s", current_str);
		}
		/* Print the separator if not the last element and the string is not NULL */
		
		if (i < n - 1 && separator != NULL && current_str != NULL)
		{		
			printf("%s", separator);
		}

		/* Print a newline character at the end of the list */
		else if (i == n - 1)
		{
			printf("\n");
		}
	}

	va_end(string);
}
