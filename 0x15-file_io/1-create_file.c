#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: A pointer to a string.
 *
 * Return: The length of a string.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 +  _strlen_recursion(s + 1));
}

/**
 * create_file - A function that creates a file.
 * @filename: The name of the file to create.
 * @text_content: A NULL terminated string to write to the file.
 *
 * Return: 1 on Suceess. -1 otherwise.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes = 0, len = text_content != NULL ? _strlen_recursion(text_content) : 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (len)
		bytes = write(fd, text_content, len);
	else
		bytes = len;

	close(fd);
	return (bytes == len ? 1 : -1);
}
