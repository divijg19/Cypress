/* CS50's Problem Set 1: Credit */

#include <stdio.h>

int main(void)
{
    long card;

    printf("Number: ");
    scanf("%ld", &card);

    long temp = card;
    int sum1 = 0;
    int sum2 = 0;
    int digit;
    int position = 0;
    int length = 0;

    while (temp > 0)
    {
        digit = temp % 10;

        if (position % 2 == 1)
        {
            int doubled = digit * 2;
            sum1 += doubled / 10;
            sum1 += doubled % 10;
        }
        else
        {
            sum2 += digit;
        }

        temp /= 10;
        position++;
        length++;
    }

    int checksum = sum1 + sum2;

    if (checksum % 10 != 0)
    {
        printf("INVALID\n");
        return 0;
    }

    long start = card;
    while (start >= 100)
    {
        start /= 10;
    }

    if ((start == 34 || start == 37) && length == 15)
    {
        printf("AMEX\n");
    }
    else if ((start >= 51 && start <= 55) && length == 16)
    {
        printf("MASTERCARD\n");
    }
    else if ((start / 10 == 4 && length == 13) || (start / 10 == 4 && length == 16))
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }

    return 0;
}
