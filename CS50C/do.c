#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = 5;
    int i;
    do
    {
        i = get_int("What's i?\n");
    }
    while (i < 0);
    printf("%d + x = %d\n", i, i + x);
    int y;
    while (true)
    {
        y = get_int("What's the answer? \n");
        if (y == x)
        {
            break;
        }
    }
}
