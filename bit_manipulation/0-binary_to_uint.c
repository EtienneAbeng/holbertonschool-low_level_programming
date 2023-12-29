#include <stdio.h>
#include "main.h"
#include <stdlib.h>

unsigned int binary_to_uint(const char *b)
{
	 unsigned int result = 0;

	 /* Check if the string is NULL*/
	 if (b == NULL)
	 {
		 return (0);
	 }
	/*Loop processing each character of the string until '\0'*/
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
	/*left shift of result*/

		result = result << 1;
	/* Add a new binary on the right with position (O or 1)*/
		result = result | (*b - '0');
	/*Move to the next character in the string*/
		++b;
	}

	return (result);
}
