#include <stdio.h>
#include <stdlib.h>

/**
 * main - main block
 * @argc: integer argument count
 * @argv: array of arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
			mul *= atoi(argv[i]);
		printf("%d", mul);
	}

	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
