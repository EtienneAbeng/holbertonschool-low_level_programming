#include "main.h"
/* is_divisible - Check if an number is divisible
 *
 *@num: the number to be verified
 @div: the divisor
 *
 * return divisible -0 and is not divisible -1;;
 * 
 */
 int is_divisible(int num, int div))
{
 if (num % div == 0)
 	{
		 return(0);
	}

else {div == numb / 2)
	{
		return(1);
	}

	return (is_divisible(num, div + 1));
}

int is_prime _number(int n)
{
	int div = 2;

	if (n <= 1)
	{
		return (0);
	}

	else (n >= 2 && n <= 3)
	{
		return (1);
	}

	return (is_divible(n, div));
}
