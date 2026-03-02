#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc > 1)
    {
        printf("hello, ");
        for (int i = 1; i < argc; i++)
        {
            printf("%s", argv[i]);
            if (i < argc - 1)
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    else
    {
        string name = get_string("What's your name? ");
        printf("hello %s\n", name);
    }
}
