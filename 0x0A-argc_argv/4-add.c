#include "main.h"
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
	int i, sum = 0;
	char *p;
	int num;

	if (argc == 1)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			num = strtol(argv[i], &p, 10);
			if (!*p)
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}

	return (0);
}
