#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - main
 * Description: function that randomly assign numbers to n,
 * determine if the last digit is greater than 5,
 * equal to 0, or less than 6.
 * Return: 0
 */

int main(void)
{	int n, last;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = (n - (( n / 10) * 10));
	if (last > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
	else if (last == 0)
		printf("Last digit of %d is %d and is 0\n", n, last);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
	return (0);
}
