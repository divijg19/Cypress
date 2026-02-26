#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("Bubba wakes up groggy and says: \n");
    int i = 3;
    while (i > 0)
    {
        printf("bubba-bub\n");
        i--;
    }
    printf("Bubba's dog is awake and joyously responds: \n");
    int j = 0;
    while (j < 4)
    {
        printf("woof\n");
        j++;
    }
    printf("Bubba's cat is woken and is enraged: \n");
    for (int k = 1; k <= 5; k++)
        printf("rawr\n");
    int n;
    while (true) //simple while condition loop
    {
        n = get_int("How many times should Bubba's woodpecker peck in response?:\n");
        if (n >= 0)
        {
            break;
        }
    }
    for (int l = 0; l < n; l++) // canonical convention for range
        printf("peck\n");
    int m;
    do // do-while
    {
      m = get_int("The cows moo in response, how many do you imagine?: \n");
    }
      while (m < 0);
    for (int o = 0; o < m; o++)
      printf("moo!\n");
}
