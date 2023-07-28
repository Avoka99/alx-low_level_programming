#include <stdio.h>
#include "lists.h"

void my_function(void) __attribute__((constructor));

/**
 * my_function - Function to be executed before main.
 */
void my_function(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

