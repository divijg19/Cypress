#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(void)
{
    string name;
    bool valid;
    do
    {
        name = get_string("Name: \n");
        valid = true;

        for (int i = 0; name[i]; i++)
        {
            if (!isalpha(name[i]) && name[i] != ' ')
            {
                valid = false;
                break;
            }
        }
    }
    while (!valid);

    int n = 0;
    while (name[n] != '\0')
    {
        n++;
    }
    printf("%i\n", n);
}
