#include "_putchar.c"

/**
 * main - main block
 * Description: print out "_putchar"
 * Result: 0
 */

int main(void)
{
  char str[] = "_putchar";
  int i = 0;

  while (str[i] != '\0')
    {
      
  _putchar(str[i]);
  i++;
    }
  return (0);
}
