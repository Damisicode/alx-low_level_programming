#include <stdio.h>
#include <string.h>

int main(void)
{
  int s;
  s = strlen("and that piece of art is useful - Dora Korpar, 2015-10-19\n");
  
  fwrite(2,
	"and that piece of art is useful - Dora Korpar, 2015-10-19\n",
	s);
  
  return (1);
}
