#include <stdio.h>

int main(void) {
  int c = 0;
  printf("What's your age?\n");
  scanf("%d", &c);
  printf("Your age is %d", c);
  return 0;
}
