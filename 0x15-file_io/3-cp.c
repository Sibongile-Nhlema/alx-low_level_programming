#include "main.h"

char *make_buffer(char *file);
void close_file(int fileD);
/**
 * main - copies contents of one file into another
 * @argc: number of arguments
 * @argv: array of pointers to arguments
 *
 * Return:0 on success.
 * Errors:
 * if argc is incorrect = exit code 97
 * if file_from is not found or not readable = exit code 98
 * if file_to cant be created or written = exit code 99
 * if file_to or file_from can't close = exit code 100
 */

int main(int argc, char *argv[])
{
	int filefrom, fileto, rd, wt;
	char *buf;

	if (argc != 3) /* not enough argumnts*/
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buf = make_buffer(argv[2]);
	filefrom = open(argv[1], O_RDONLY);
	rd = read(filefrom, buf, 1024);
	fileto = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	while (rd > 0) /*all other errors */
	{
		if (filefrom == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}
		wt = write(fileto, buf, rd);
		if (fileto == -1 || wt == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}
		rd = read(filefrom, buf, 1024);
		fileto = open(argv[2], O_WRONLY | O_APPEND);
	}
	free(buf);
	close_file(filefrom);
	close_file(fileto);
	return (0);
}

/**
 * close_file - Closes file descriptors
 * @fileD: file descriptor
 */

void close_file(int fileD)
{
	int end;

	end = close(fileD);

	if (end == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't close fd %d\n", fileD);
		exit(100);
	}
}

/**
 * make_buffer - creates 1024 bytes of memeory
 * @file: The name of the file buffer
 * Return: A pointer to the newly-allocated buffer
 */

char *make_buffer(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buf);
}
