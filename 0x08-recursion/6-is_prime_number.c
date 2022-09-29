#include "main.h"

/**
 * is_prime_number - check if a number is a prime number
 * @n: integer
 * Return: 1 if number is prime and 0 otherwise
 */

int is_prime_number(int n)
{
	int start = n / 2;

	if (n <= 1)
		return (0);
	return (prime(n, start));
}
	
/**
 * prime - returns 1 if n is prime
 * @n: integer to be checked
 * @start: initiation
 *
 * Return: 1 if n is prime and 0 otherwise
 */

int prime(int n, int start)
{
	if (start <= 1)
		return (1);
	else if (n % start == 0)
		return (0);
	return (prime(n, start - 1));
}
