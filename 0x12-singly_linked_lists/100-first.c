#include "lists.h"

void custom_first(void) __attribute__ ((constructor));

/**
 * custom_first - prints a custom sentence before the main
 * is executed
 *
 */

void custom_first(void)
{
	printf("Welcome to the program!\n");
	printf("This is the custom first function.\n");
}
