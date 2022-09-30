#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * checker - checks for available cent denomination
 * @num: integer number to count
 * Return: integer number of denomination needed
 */

int checker(int num)
{
	int total = 0;

	if (num / 25 >= 1)
	{
		total += num / 25;
		num %= 25;
	}

	if (num / 10 >= 1)
	{
		total += num / 10;
		num %= 10;
	}
	if (num / 5 >= 1)
	{
		total += num / 5;
		num %= 5;
	}
	if (num / 2 >= 1)
	{
		total += num / 2;
		num %= 2;
	}
	if (num / 1 >= 1)
	{
		total += num / 1;
		num %= 1;
	}

	return (total);
}

/**
 * main - main block
 * @argc: integer number of argument passed
 * @argv: array of arguments
 * Description: print the minimum number of coins to
 * make exchange for an amount of money
 * Return: integer number of coins needed for exchange
 */

int main(int argc, char *argv[])
{
	int num;

	if (argc == 2)
	{
		num = atoi(argv[1]);
		if (num >= 0)
		{
			printf("%d\n", checker(num));
		}
		else
			printf("0\n");
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
