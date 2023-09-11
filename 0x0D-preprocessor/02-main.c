#include "main.h"
#include <unistd.h>
#include <stdio.h>

int _putchar(char c);

/**
 * main - prints file name
 * Return: always 0
 */

int main(void)
{
	const char *filename = __FILE__;
	int i = 0;

	while (filename[i] != '\0')
	{
		_putchar(filename[i]);
		i++;
	}

	_putchar('\n');

	return (0);
}

/**
 * _putchar - write single char to stdout
 * @c: char
 *
 * Return: always 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
