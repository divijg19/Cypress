#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = 5;
    int m;
    while (true)
    {
        m = (get_int("What's m? \n"));
        if (m > x)
        {
            printf("%d is observed to be greater than %d\n", m, x);
            break;
        }
        else if (m < x)
        {
            printf("%d is observed to be less than %d\n", m, x);
            break;
        }
        else
        {
            printf("Both numbers given are equal\n");
        }
    }
}