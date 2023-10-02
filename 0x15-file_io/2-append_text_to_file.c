#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file
 *
 * Return: 1 on sucess
 * on failure: -1 (if filename == Null) or
 * (user lacks permissons)
 * (any other failure)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, prnt, length;

	/* check if file exists first */
	if (filename == NULL) /*filename does not exist*/
		return (-1);
	if (text_content == NULL)
	{
		while (text_content[length] != '\0')
			length++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	prnt = write(fd, text_content, length);

	if (fd == -1 || prnt == -1) /* if user does not have permisions*/
		return (-1);
	close(fd);
	return (1);

}
