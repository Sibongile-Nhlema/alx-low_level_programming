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
	int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	size_t len = strlen(text_content);
	int ret = write(fd, text_content, len);

	if (filename == NULL)
	{
		return (-1);
	}

	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		if (ret == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
