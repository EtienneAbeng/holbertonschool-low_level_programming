#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints a random number that is positive or negative.
 *
 * Return: 0 (Always).
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Writing a number at ramdom: \n");
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	return (0);
}	
