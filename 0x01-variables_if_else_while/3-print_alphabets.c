#include <stdio.h>

/**
 * main - main block
 * Description: print a to z in lower case
 * @c
 * Return: 0
 */

int main(void)
{       char c = 'a';
char d = 'A';
while (c <= 'z')
{putchar(c);
c++;
}
while (d <= 'Z')
{putchar(d);
d++;
}
putchar('\n');
return (0);
}
