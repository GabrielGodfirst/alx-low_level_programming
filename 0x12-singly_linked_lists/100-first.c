#include <stdio.h>

void first(void)__attribute__((constructor));

/**
 * first - prints a sentence beforenthe main
 * function is executed
 */

void first(void)
{
	printf("You're beat! and yet you must allow.\n");
	printf("I bore my house uponmy back\n");
}
