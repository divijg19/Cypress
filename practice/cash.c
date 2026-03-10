/* CS50's Problem Set 1: Cash */

#include <stdio.h>

int main(void)
{
    int cents;

    do
    {
        printf("Change owed: ");
    } 
    while (scanf("%d", &cents) != 1 || cents <= 0);

    int coins = 0;

    coins += cents / 25;
    cents %= 25;

    coins += cents / 10;
    cents %= 10;

    coins += cents / 5;
    cents %= 5;

    coins += cents / 1;

    printf("%d\n", coins);
}