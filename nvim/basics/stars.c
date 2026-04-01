#include <stdio.h>

int main(void) {
  int n = 0;
  printf("How tall are the starry stairs? \n");
  scanf("%d", &n);
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}
