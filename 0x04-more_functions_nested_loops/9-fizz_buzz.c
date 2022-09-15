#include <stdio.h>

/**
 * main - "Fizz-Buzz test", prints out 1 to 100 and
 * replace multiple of 3 with fizz, multiple of 5 with buzz, and
 * multiple of 3 and 5 with fizz-buzz
 * Return: 0
 */

int main(void)
{
	int i = 1;
	
	while (i < 101)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz");
		else if ((i % 3) == 0)
			printf("Fizz");
		else if ((i % 5) == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i != 100)
			printf(" ");
		i++;
	}
	printf("\n");
	return (0);
}
