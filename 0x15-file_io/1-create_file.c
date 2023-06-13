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
	FILE *fp;
	int ret;

	if (filename == NULL)
		return (-1);

	fp = fopen(filename, "w");
	if (fp == NULL)
		return (-1);

	if (text_content != NULL)
	{
		ret = fprintf(fp, "%s", text_content);
		if (ret < 0)
		{
			fclose(fp);
			return (-1);
		}
	}

	fclose(fp);
	return (1);
}
