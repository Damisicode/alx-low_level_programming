#include <stdio.h>

/**
 * Main - main function that prints number from 0 to 9
 * 
 * Return 0
 */

int main(){

	int i=0;
	while (i < 10) {
		putchar(i + '0');
	        i++;
	}
	putchar('\n');
	return (0);
}
