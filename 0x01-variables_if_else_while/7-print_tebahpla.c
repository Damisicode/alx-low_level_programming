#include <stdio.h>

/**
 * main - main block
 * Description: print a to z in lower case
 * @c
 * Return: 0
 */

int main(void)
{       char c = 'z';
while (c >= 'a')
{putchar(c);
c--;
}
putchar('\n');
return (0);
}
