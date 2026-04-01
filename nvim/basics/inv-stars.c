#include <stdio.h>

int main(void) {
  int n = 0;
  printf("How tall are the inverted stairs? \n");
  scanf("%d", &n);
  for (int i = n; i >= 1; i--) {
    for (int j = 1; j <= i; j++) {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}
