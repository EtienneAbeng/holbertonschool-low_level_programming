#include "main.h"
/**
 * factorial - function that return the factorial of given number
 *
 * @n: the numebr of factorial
 *
 * Return : the factorial number found
 */
 int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else if ( n == 0)
	{
		return (1);
	}

	else
	{
		return (n * factorial ( n - 1));
	}
}
