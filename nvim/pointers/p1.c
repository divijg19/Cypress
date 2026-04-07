#include <stdio.h>

int main(void) {
  int x = 42;
  int *p = &x;

  printf("Value of x: %d\n", x);
  printf("Address of x: %p\n", &x);
  printf("Value of p: %d\n", *p);
  printf("Address of p: %p\n", &p);
}
