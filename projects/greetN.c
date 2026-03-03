#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *trim_leading(char *str)
{
    while(isspace((unsigned char)*str))
    {
        str++;
    }
    return str;
}

int main(int argc, char *argv[])
{
    int limit = -1;
    char buffer[1024] = "";
    char *token;

    if (argc == 1)
    {
        printf("People to greet: ");
        fgets(buffer, sizeof(buffer), stdin);
        buffer[strcspn(buffer, "\n")] = '\0';
    }
    else
    {
        int is_number = 1;

        for (int i = 0; argv[1][i] != '\0'; i++)
        {
            if (!isdigit(argv[1][i]))
            {
                is_number = 0;
                break;
            }
        }

        int start_index = 1;

        if (is_number)
        {
            limit = atoi(argv[1]);
            start_index = 2;
        }

        for (int i = start_index; i < argc; i++)
        {
            strcat(buffer, argv[i]);
            if (i < argc - 1)
            {
                strcat(buffer, " ");
            }
        }
    }
    token = strtok(buffer, ",");
    int count = 0;

        while (token != NULL && (limit == -1 || count < limit))
        {
            char *name = trim_leading(token);
            printf("hello, %s\n", name);

            token = strtok(NULL, ",");
            count++;
        }
    return 0;
}
