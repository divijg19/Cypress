#include <stdio.h>

int main(void)
{
    int rows = 0;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    while (rows > 0)
    {
        for (int i = 1; i <= rows; i++)
        printf("#");
        printf("%*c", rows, ' ');
        printf("\n");
        rows--;
    }
}