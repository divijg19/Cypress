#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x, y;
    printf("hello, world\n");
    FILE *ha = fopen("ha.txt", "w");
    if (ha == NULL)
    {
        printf("Failed to open file for writing");
        return 1;
    }
    string answer = get_string("What's your name? ");
    printf("Enter two numbers labelled x and y: ");
    scanf("%d %d", &x, &y);
    printf("Hello, %s\n", answer);
    printf("%s chose %d & %d\n", answer, x, y);
    fprintf(ha, "Well well well, ha!\n%s chose %d & %d", answer, x, y);
    fclose(ha);
    if (x < y)
    {
        printf("%d is less than %d\n", x, y);
    }
    else if (x > y)
    {
        printf("%d is not less than %d\n", x, y);
    }
    else
    {
        printf("x is equal to y\n");
    }
}
