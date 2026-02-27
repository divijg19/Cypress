#include <stdio.h>

int main(void)
{
    int num1, num2, table = 0;
    printf("Choose multiplicant and multiplier: ");
    scanf("%d %d", &num1, &num2);
    printf("Multiplication table of %d:\n", num1);
    while (table <= num2)
    {
        printf("%d x %d = %d\n", num1, table, num1 * table);
        table++;
    }
}