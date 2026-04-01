#include <stdio.h>

int main(void) {
  int num = 0;
  printf("Enter your number: \n");
  scanf("%d", &num);
  if (num % 2 == 0) {
    printf("Even");
  } else {
    printf("Odd");
  }
  return 0;
}
