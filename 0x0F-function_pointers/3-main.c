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
	int first, third;
	int (*result)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	first = atoi(argv[1]);
	third = atoi(argv[3]);
	result = get_op_func(argv[2]);

	if (result == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", result(first, third));

	return (0);
}
