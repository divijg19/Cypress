/* CS50 PS1 Cash */
/* Cash Me, Maybe */

#include <stdio.h>

int main(void)
{
    float change;
    do
    {
        printf("Change owed: ");
        scanf("%f", &change);
    }
    while (change < 0);

    int cents = (int)(change * 100 + 0.5);
    int coins = 0;

    while (cents >= 25)
    {
        cents -= 25;
        coins++;
    }
    while (cents >= 10)
    {
        cents -= 10;
        coins++;
    }
    while (cents >= 5)
    {
        cents -= 5;
        coins++;
    }
    while (cents >= 1)
    {
        cents -= 1;
        coins++;
    }

    printf("%i\n", coins);
}