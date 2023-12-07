#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: The string.
 * Return: Length of the string.
 */

int _strlen(char *s)
{
        int length = 0;

        while (s[length] != '\0')
        {
                length++;
        }
        return (length);
}


/**
 * create_file - Creates a files with specified content.
 * @filename: Name of the file to create
 * @text_content: NULL to write to the file
 * Return: (1) Success or (-1) Fail
 */

int create_file(const char *filename, char *text_content)
{
	int fd, written, close_status;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		written = write(fd, text_content, _strlen(text_content));
		if (written == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close_status = close(fd);
	if (close_status == -1)
		return (-1);

	return (1);
}
