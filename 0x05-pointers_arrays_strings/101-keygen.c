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
		printf("%c", my_rand);
		total -= my_rand;
	}
	printf("%c", total);

	return (0);
}
