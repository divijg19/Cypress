#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char c = get_char("Do you agree? \n");
    if (c == 'y' || c == 'Y')
    {
        printf("Agreed.\n");
    }
    else
    {
        printf("Rejected.\n");
    }

}
