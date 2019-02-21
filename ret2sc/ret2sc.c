#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char message[48];

int main()
{
  char name[16];
  printf("Give me your message: ");
  fflush(stdout);
  read(0, message, 0x30);
  printf("Give me your name: ");
  fflush(stdout);
  read(0, name, 0x30);
  return 0;
}
