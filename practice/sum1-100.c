#include <stdio.h>

int main(void)
{
    int sum = 0;
    int numbers = 1;
    for (int i = 1; i <= 100; i++)
    {
        sum += i;
    }
    do
    {
        printf("%d + ", numbers);
        numbers++;
    }
    while (numbers <= 100);
    printf("\b\b= ");
    printf("%d\n", sum);
    return 0;
}