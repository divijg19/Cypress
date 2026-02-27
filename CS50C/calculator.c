#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt user for two numbers
    float x = get_float("Input x: ");
    float y = get_float("Input y: ");

    // Print the sum, difference, product, quotient, and remainder
    printf("%f + %f = %f\n", x, y, x + y);
    printf("%f - %f = %f\n", x, y, x - y);
    printf("%f * %f = %f\n", x, y, x * y);
    printf("%f / %f = %f\n", x, y, x / y);

    int dollars = 1;
    while (true)
    {
        char c = get_char("Here's %i dollars. Double it and give it to the next person? ", dollars);
        if (c == 'y' || c == 'Y')
        {
            dollars *= 2;
        }
        else
        {
            break;
        }
    }
}