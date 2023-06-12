#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: arguments vector
 * Return: Always 0
 */

void copy_file(char *from, char *to);
int open_file(char *filename, int mode, int permissions);

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	copy_file(argv[1], argv[2]);

	return (0);
}

/**
 * copy_file - copies file
 * @from: pointer
 * @to: pointer
 * Return: nothing
 */

void copy_file(char *from, char *to)
{
	int fd_from = open_file(from, O_RDONLY, 0);
	int fd_to = open_file(to, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	char buffer[1024];
	ssize_t bytes_read, bytes_written;
	while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", to);
			exit(99);
		}
	}
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
}

/**
 * open_file - opens file
 * @filename: filename
 * @mode: mode
 * @permissions: permissions
 * Return: 1 on sucess or -1 on error
 */

int open_file(char *filename, int mode, int permissions)
{
	int fd = open(filename, mode, permissions);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", filename);
		exit(98);
	}
	return (fd);
}
