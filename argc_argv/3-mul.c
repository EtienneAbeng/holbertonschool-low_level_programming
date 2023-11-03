#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - multiple two numbers.
 *
 * @arc : argument count.
 * @argv: argument vector.
 *
 * return: O
 */
int main(int argc, char *argv[])
{
	int  prod;

	if (argc == 3)
	{
		prod = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", prod);
		return (0);
	}
	printf("Error\n");
	return (1);
}
