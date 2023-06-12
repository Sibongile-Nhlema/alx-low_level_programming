#include "main.h"
#include <stdio.h>

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: filename
 * @text_content: added content
 *
 * Return: 1 if it exists, -1 if not
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file;

	if (filename == NULL)
		return (-1);

	file = fopen(filename, "a");

	if (file == NULL)
		return (-1);

	if (text_content != NULL)
	{
		fprintf(file, "%s", text_content);
	}

	fclose(file);
	return (1);
}
