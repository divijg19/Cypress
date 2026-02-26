#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("What's x? \n");
    printf("%d chosen as x\n", x);
    int y = get_int("What's y? \n");
    printf("%d chosen as y\n", y);
    if (x > y)
    {
        printf("%d is observed to be greater than %d\n", x, y);
    }
    else if (x < y)
    {
        printf("%d is observed to be greater than %d\n", y, x);
    }
    else
    {
        printf("Both numbers given are equal\n");
    }
}