#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/**
 * main - prints winning numbers
 * Return: All number followed by newline
 */

int main(void)
{
	write(1, &("9 8 10 24 75 9"), strlen("9 8 10 24 75 9"));
	write(1, &("/n"), 1);
}

