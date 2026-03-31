#include <stdio.h>

int main(void) {
  int a, b = 0;
  printf("Enter two numbers: \n");
  scanf("%d %d", &a, &b);
  int c = a + b;
  int d = a - b;
  int x = a * b;
  printf("Sum: %d\n", c);
  printf("Difference: %d\n", d);
  printf("Product: %d\n", x);
}
