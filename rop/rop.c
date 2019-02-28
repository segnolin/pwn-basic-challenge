#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
  char buf[16];
  puts("This is your first rop challenge ;)");
  fflush(stdout);
  read(0, buf, 0x90);
  return 0;
}
