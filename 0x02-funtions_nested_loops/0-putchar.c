/**
 * main - main block
 * Description: print out "_putchar"
 * Result: 0
 */

int main(void)
{
char put_char[9] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r', '\0'};
for (int i = 0; put_char[i]; i++)
putchar(put_char[i]);
putchar('\n');
return (0);
}
