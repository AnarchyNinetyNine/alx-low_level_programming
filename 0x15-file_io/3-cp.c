#include "main.h"

/**
 * cp - A program that copies the content of a file to another file.
 * @file_from: The file to copy from.
 * @file_to: File tocopy to.
 */

void cp(char *file_from, char *file_to)
{
	int fdFileTo, fdFileFrom;
	char *errFileToTxt = "Error: Can't write to %s\n";
	char *errFileFromTxt = "Error: Can't read from file %s\n";
	char *errCloseFdTxt = "Error: Can't close fd %d\n";
	char buffer[1024];
	int fds[2];
	int i = 2;

	if ((fdFileFrom = open(file_from, O_RDONLY)) == -1)
	{
		dprintf(STDERR_FILENO, errFileFromTxt, file_from, strlen(errFileFromTxt));
		exit(98);
	}

	if ((fdFileTo = open(file_to, O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0666)) == -1)
	{
		dprintf(STDERR_FILENO, errFileToTxt, file_to, strlen(errFileToTxt));
		exit(99);
	}

	fds[0] = fdFileFrom;
	fds[1] = fdFileTo;

	while (read(fdFileFrom, buffer, 1024) != 0)
		write(fdFileTo, buffer, strlen(buffer));

	while (i--)
	{
		if (close(fds[i]) != 0)
		{
			dprintf(STDERR_FILENO, errCloseFdTxt, fds[i], strlen(errCloseFdTxt));
			perror("Errore");
			exit(100);
		}
	}
}

/**
 * main - Check the code.
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: 0 on Success.
 */

int main(int argc, char **argv)
{
	char *usageTxt = "Usage: cp file_from file_to\n";

	if (argc != 3)
	{
		dprintf(STDOUT_FILENO, usageTxt, strlen(usageTxt));
		exit(97);
	}

	cp(*(argv + 1), *(argv + 2));

	return (0);
}
