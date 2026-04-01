#include <stdio.h>

int main(void) {
  int x = 10;
  printf("%d\n", x);
  printf("%p\n", &x);

  int *p = &x;
  *p = 20;
  printf("%d\n", x);

  return 0;
}
