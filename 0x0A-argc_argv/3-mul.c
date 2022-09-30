#include <stdio.h>
#include <stdlib.h>

/**
 * main - main block
 * @argc: integer argument count
 * @argv: array of arguments
 * Return: Always 0
 */

int main(int argc, char* argv[])
{
	int i, sum = 0;

	if (argc == 3)
	{
		for (i = 0; i < argc; i++)
			sum += atoi(argv[i]);
		printf("%d", sum);
	}

	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
