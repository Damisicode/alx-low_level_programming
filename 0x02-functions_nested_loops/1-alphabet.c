#include "_putchar.c"

/**
 * main - main block
 * Description: printf out alphabets
 * Return: 0
 */

void print_alphabet(void)
{
  int i = 'a';
  while (i <= 'z')
    {    _putchar(i);
      i++;
    }
  return (0);
}
