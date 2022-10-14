#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main block
 * @argc: Argument count
 * @argv: Argument variables
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int result, first, third;
	(void)argc;

	first = atoi(argv[1]);
	third = atoi(argv[3]);
	result = get_op_func(argv[2])(first, third);

	if (result != '\0')
		printf("%d", result);
	return (0);
}
