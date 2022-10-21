#include <stdio.h>

/**
 * before_main - prints string before main is executed
 */

void before_main() __attribute__((constructor));

void before_main()
{
	printf("You're beat! and yet, you must allow,\n\
I bore my house upon my back!\n");
}
