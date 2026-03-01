#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>

int main(void)
{
    char name[100];
    bool valid;

    do
    {
        printf("Name: ");
        fgets(name, sizeof(name), stdin);

        // remove newline if present
        name[strcspn(name, "\n")] = '\0';

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