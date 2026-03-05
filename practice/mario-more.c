/* Implementing CS50's mario problem */
#include <stdio.h>

int main(void)
{
    int i;

    do
    {
        printf("How tall should the pyramids be? ");
        scanf("%d", &i);
        if (scanf("%d", &i) != 1)
        {
            return 1;
        }
    }
    while (i < 1 || i > 8);

    for (int j = 0; j < i; j++)
    {
        for (int k = 0; k < i - j - 1; k++)
        {
            printf(" ");
        }
        for (int l = 0; l < j + 1; l++)
        {
            printf("#");
        }
        printf("  ");
        for (int m = 0; m < j + 1; m++)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}