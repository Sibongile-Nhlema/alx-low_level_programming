#include "main.h"
#include <stdio.h>

/**
 * read_textfile - reads a text file and prints letters
 * @filename: filename
 * @letters: number of letters to be printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char *buffer;
	size_t read_size;
	ssize_t write_size;

	if (filename == NULL)
	{
		return (0);
	}

	file = fopen(filename, "r");
	if (file == NULL)
	{
		return (0);
	}

	buffer = (char *) malloc(letters * sizeof(char));
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}

	read_size = fread(buffer, sizeof(char), letters, file);
	if (read_size == 0)
	{
		fclose(file);
		free(buffer);
		return (0);
	}

	write_size = write(STDOUT_FILENO, buffer, read_size);
	if ((size_t)write_size != read_size)
	{
		fclose(file);
		free(buffer);
		return (0);
	}

	fclose(file);
	free(buffer);
	return (read_size);
}
