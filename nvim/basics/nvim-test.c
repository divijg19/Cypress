#include <stdio.h>

int main(void) {
  int n = 0;
  printf("Test your lucky number: \n");
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    for (int j = n - i; j > 1; j--) {
      printf("%d\n", j - i);
      if (j != n) {
        continue;
      } else {
        printf("%d\n", i);
      }
    }
    return 0;
  }
}
