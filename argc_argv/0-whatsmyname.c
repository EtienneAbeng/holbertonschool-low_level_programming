#include <stdio.h>
#include "main.h"
/**
 * main - prints the programm name.
 * @agr: The numberof argument supplied to the program.
 * @argv: An arry of pointers to the argument.
 *
 * return: Always 0.
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);

	return (0);
}
