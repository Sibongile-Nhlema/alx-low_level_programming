#include <stdio.h>
#include "lists.h"

void printMessage(void)__attribute__((constructor));

/**
 * printMessage - prints statement before main
 * function succeeded
 */

void printMessage()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
