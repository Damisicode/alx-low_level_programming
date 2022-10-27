#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string to the binary number
 * Return: the converted number
 */
unsigned int converter(char i);
unsigned int power(int number, int power);

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i, length;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
		;

	length = i;
	i = 0;
	while (b[i])
	{
		if (b[i] == '1' || b[i] == '0')
			result += (converter(b[i]) * power(2, length));
		else
			return (0);
		i++;
		length--;
	}

	return (result);
}

unsigned int converter(char i)
{
	if (i == '1')
		return (1);
	else if (i == '0')
		return (0);
	else
		return (0);
}

unsigned int power(int number, int power)
{
	int i = 1;
	unsigned int result = 1;

	while (i < power)
	{
		result *= number;
		i++;
	}

	return (result);
}
