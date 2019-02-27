#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
  char buf[16];
  puts("This is your first bof challenge ;)");
  fflush(stdout);
  read(0, buf, 0x90);
  return 0;
}
