#include <cs50.h>
#include <stdio.h>

// Not preferred due to being less compact and due to usage of nested loops not resetting required values.
// A for loop is preferred here due to n being a finitely known number.
// A while loop would be used for infinite input validation
// A do-while loop would be used for recursive validation and

// int main(void)
// {
//     int row = 0;
//     int col = 0;
//     int n = get_int("What size is the square box Mario is jumping over? \n");
//     while (row < n)
//     {
//         col = 0;
//         while (col < n)
//         {
//             printf(":#:");
//             col++;
//         }
//         printf("\n");
//         row++;
//      }
// }

//I'm confident in the for loop implementation below:

int main(void)
{
    int n = get_int("What size is the square box Mario is jumping over? \n");
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            printf(":#:");
        }
        printf("\n");
    }
}