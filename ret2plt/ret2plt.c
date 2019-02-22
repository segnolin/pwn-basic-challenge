#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char name[16];

int main()
{
  setvbuf(stdout, 0, 2, 0);
  setvbuf(stdin, 0, 2, 0);
  char buf[16];
  system("echo What is your name?");
  read(0, name, 0x10);
  puts("Say something:");
  read(0, buf, 0x20);
  return 0;
}
