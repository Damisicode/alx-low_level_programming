#include "_putchar.c"

/**
 * main - main block
 * Description: print out "_putchar"
 * Result: 0
 */

int main(void)
{
  char str[10] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r', '\n','\0'};
  int i=0;
  while (str[i] != '\0')
{  _putchar(str[i]);
  i++;
 }
  return (0);
}
