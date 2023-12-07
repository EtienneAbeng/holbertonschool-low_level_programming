#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: Name of the file.
 * @text_content: NULL-terminated string to add to the file.
 *
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file;
	size_t length = 0;

	if (filename == NULL)
		return (-1);
	
	/*Open the file in append mode*/
	file = fopen(filename, "a");
	
	if (file == NULL)
		return (-1);

	if (text_content != NULL)
	{
		/*Calculate the length of the text content*/
		while (text_content[length] != '\0')
			length++;
	

		/*Write the content to the file*/
		if (fwrite(text_content, 1, length, file) != length)
		{
			fclose(file);
			return (-1);
		}
	}

	fclose(file);
	return (1);
}
