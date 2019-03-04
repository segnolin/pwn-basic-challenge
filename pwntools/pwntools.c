#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <time.h>
#include <unistd.h>

void handler(int signum){
  puts("Timeout");
  _exit(1);
}

int main()
{
  setvbuf(stdout, 0, 2, 0);
  setvbuf(stdin, 0, 2, 0);
  signal(SIGALRM, handler);
  alarm(90);

  unsigned seed = (unsigned)time(NULL);
  srand(seed);

  unsigned int magic;
  printf("Give me the magic number :)\n");
  read(0, &magic, 4);
  if (magic != 3735928559) {
    printf("Bye~\n");
    exit(0);
  }

  printf("Complete 1000 math questions in 90 seconds!!!\n");
  for (int i = 0; i < 1000; ++i) {
    int a = random() % 65535;
    int b = random() % 65535;
    int c = random() % 3;
    int ans;
    switch(c) {
      case 0:
        printf("%d + %d = ?", a, b);
        scanf("%d", &ans);
        if (ans != a + b) {
          printf("Bye Bye~\n");
          exit(0);
        }
        break;
      case 1:
        printf("%d - %d = ?", a, b);
        scanf("%d", &ans);
        if (ans != a - b) {
          printf("Bye Bye~\n");
          exit(0);
        }
        break;
      case 2:
        printf("%d * %d = ?", a, b);
        scanf("%d", &ans);
        if (ans != a * b) {
          printf("Bye Bye~\n");
          exit(0);
        }
        break;
    }
  }
  printf("Good job!\n");
  system("sh");

  return 0;
}
