#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content written in the file
 *
 * Return: 1 if success, -1 if error
 */

int create_file(const char *filename, char *text_content)
{
	int fd, ret, len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_EXCL, 0600);
	if (fd == -1)
		return (text_content == NULL ? 1 : -1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;

		ret = write(fd, text_content, len);
		if (ret == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
