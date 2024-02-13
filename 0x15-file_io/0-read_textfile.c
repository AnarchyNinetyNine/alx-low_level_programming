#include "main.h"

/**
 * read_textfile - A function that reads a text file and prints
 *                 it to the POSIX standard output.
 * @filename: A file pointer variable.
 * @letters: The number of letters it should read and print.
 *
 * Return: The actual number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t bytes;

	if (!filename || !letters)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	bytes = read(fd, buffer, letters);
	bytes = write(STDOUT_FILENO, buffer, bytes);
	close(fd);
	free(buffer);
	return (bytes);
}
