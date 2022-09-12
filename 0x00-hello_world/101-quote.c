#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * main - main block
 * Description: counts the length of line of text and writes to a file
 * Return: 1
 */

int main(void)
{int s;
s = strlen("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", s);
return (1);
}
