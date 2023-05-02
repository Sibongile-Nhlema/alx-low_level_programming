#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates random valid passwords for the program 101-crackme
 * Return: Always 0
 */

int main(void)
{
	char password[11];
	const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

	srand(time(NULL));

	for (int i = 0; i < 10; i++)
	{
		password[i] = charset[rand() % (sizeof(charset) - 1)];
	}

	password[10] = '\0';

	printf("Generated Password: %s\n", password);

	return (0);
}
