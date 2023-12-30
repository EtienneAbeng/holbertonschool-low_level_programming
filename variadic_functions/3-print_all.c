#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Print anything based on the format.
 * @format: A string that represents the types of arguments.
 *         c: char, i: integer, f: float, s: char*.
 */

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;
	float f;

	va_start(args, format);

	while (format && format[i])
	{
		/* Check if the format specifier is char */
		if (format[i] == 'c')
		{
			printf("%c, ", va_arg(args, int));
		}
		/* Check if the format specifier is integer */
		else if (format[i] == 'i')
		{
			printf("%d, ", va_arg(args, int));
		}
		/* Check if the format specifier is float */
		else if (format[i] == 'f')
		{
			f = va_arg(args, double);
			printf("%f, ", f);
		}
		/* Check if the format specifier is string */
		else if (format[i] == 's')
		{
		/* string is NULL print "(nil)", otherwise print the string */
			str = va_arg(args, char *);
			if (str == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s, ", str);
			}
		}
		/* Move to the next character in the format string */
		i++;
	}
	printf("\n");

	va_end(args);

}
