#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int comp(const void *lhs, const void *rhs)
{
  long long f = *((long long *)lhs);
  long long s = *((long long *)rhs);
  if (f > s) return 1;
  if (f < s) return -1;
  return 0;
}

int main()
{
  setvbuf(stdout, 0, 2, 0);
  setvbuf(stdin, 0, 2, 0);

  char name[16];
  long long arr[10000];
  int size;
  puts("Welcome to the sorting service!");
  puts("Please enter array size (1~10000):");
  scanf("%d", &size);
  puts("Please enter the array:");
  for (int i = 0; i < size; ++i) {
    long long temp;
    scanf("%lld", &temp);
    if (temp >= 0) {
      arr[i] = temp;
    }
  }
  qsort(arr, size, sizeof(long long), comp);
  puts("Here is the result");
  for (int i = 0; i < size; ++i) {
    printf("%lld ", arr[i]);
  }
  puts("");
  puts("Please leave your name:");
  read(0, name, 0x90);
  puts("Thank you for using our service!");
}
