#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
	int total;
	int count;
	int my_rand;

	srand(time(NULL));

	for (count = 0, total = 2772; total > 127; count++)
	{
		my_rand = (rand() % 128);
		printf("%d", my_rand);
		total -= my_rand;
	}
	printf("%d", total);

	return (0);
}
