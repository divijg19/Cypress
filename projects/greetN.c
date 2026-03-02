// program to take arguments from command line and greet the user as well as multiple users

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define BUFFER_SIZE 1024

// Remove leading and trailing spaces
char *trim(char *str)
{
    while (isspace((unsigned char)*str)) str++;

    if (*str == 0) return str;

    char *end = str + strlen(str) - 1;

    while (end > str && isspace((unsigned char)*end)) end--;

    end[1] = '\0';

    return str;
}

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("Usage: ./greet name1, name2, ...\n");
        return 1;
    }

    char buffer[BUFFER_SIZE] = "";

    // Join all arguments into one string
    for (int i = 1; i < argc; i++)
    {
        strcat(buffer, argv[i]);

        if (i < argc - 1)
        {
            strcat(buffer, " ");
        }
    }

    // Split on commas
    char *token = strtok(buffer, ",");

    while (token != NULL)
    {
        char *name = trim(token);
        printf("hello, %s\n", name);

        token = strtok(NULL, ",");
    }

    return 0;
}