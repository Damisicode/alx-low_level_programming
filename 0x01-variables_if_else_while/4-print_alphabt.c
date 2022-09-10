#include <stdio.h>

/**
 * main - main block
 * Description: print a to z in lower case except q and e
 * @c
 * Return: 0
 */

int main(void)
{       char c = 'a';
while (c <= 'z')
{if (c != 'q' && c != 'e')
putchar(c);
c++;
}
putchar('\n');
return (0);
}
