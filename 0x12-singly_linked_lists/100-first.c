#include "lists.h"
#include <stdio.h>

void custom_first(void) __attribute__((constructor));

/**
 * custom_first - prints a custom sentence before the main
 * is executed
 *
 */

void custom_first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
