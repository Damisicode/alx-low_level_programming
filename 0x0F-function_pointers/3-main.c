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

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	first = atoi(argv[1]);
	third = atoi(argv[3]);
	result = get_op_func(argv[2])(first, third);

	if (result != '\0')
		printf("%d\n", result);
	else
	{
	printf("Error\n");
	exit(99);
	}
	return (0);
}
