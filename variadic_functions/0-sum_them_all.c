#include <stdarg.h>
/**
 * sum_them_all - Calculate the sum of a list of integers.
 * @n: The number of arguments.
 * @...: The integers to add.
 *
 * Return: The sum of the integers.
 */

int sum_them_all(const unsigned int n, ...)
{
	/*¨Declaration of the variable argument list */
	va_list listCalcul;
	unsigned int i;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}

	/* Initialize the list starting from the last fixed argument */
	va_start(listCalcul, n);
	
	for (i = 0; i < n; i++)
	{
		/* Add each integer to the sum */
		sum = va_arg (listCalcul, int);
	}
	/* Finalize the use of the list */
	va_end (listCalcul);
	/* Return the sum of the integers */
	return (sum);
}
