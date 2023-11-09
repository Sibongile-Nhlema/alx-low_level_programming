#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX stdout
 * @filename: name of file
 * @letters: numbers of letters it should read and print
 *
 * Return: actual number of letters it could read and prints, else return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file;
	char *buffer;
	ssize_t total;
	ssize_t print;

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	total = read(file, buffer, letters);
	print = write(STDOUT_FILENO, buffer, total);

	free(buffer);
	close(file);
	return (print);
}
