#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>
#include <fcntl.h>
/**
 * read_textfile - Reads a text and prints it to the POSIX standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters it could read and print.
 *      If the file cannot be opened or read, return 0.
 *      If filename is NULL, return 0.
 *	If write fails or does not write the expected amount of bytes, return 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	ssize_t bytes_read, bytes_write;
	char *buffer;

	if (filename == NULL)
		return (0);

	/*open thefile for reading*/

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);

	/*Allocation memory for the buffer*/
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file_descriptor);
		return (0);
	}

	/*Read from the file*/
	bytes_read = read(file_descriptor, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}

	/*Write to standard output*/
	bytes_write = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_write == -1 || bytes_write != bytes_read)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}
	/*Clean up and close the file*/
	free(buffer);
	close(file_descriptor);

	return (bytes_write);
}
