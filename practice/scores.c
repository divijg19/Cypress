#include <stdio.h>

float average(int scores[], float n);

int main(void)
{
    int n;
    printf("How many scores? \n");
    scanf("%d", &n);
    int scores[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter score %d: ", i + 1);
        scanf("%d", &scores[i]);
    }
    printf("Average: %f\n", average(scores, n));
}

float average(int scores[], float n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += scores[i];
    }
    return (float) sum/n;
}
