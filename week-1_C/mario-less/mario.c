// Generates multiples '#' to represent a brick tower like in the Mario game, taking an input of 1 to 8 to manipulate the height of one tower.

#include <cs50.h>
#include <stdio.h>

int main(void)
{

    
    int height;

    // input to determine the height of the tower
    do
    {
        height = get_int("Height: ");
    }

    // filter to only accept values between 1 and 8
    while (height <= 0 || height >= 9);

    // loop to generate the tower 
    for (int i = 0; i <= height; i++)
    {
        // loop to generate the rows
        for (size_t row = 0; row < i; row++)
        {
            putchar('#');
        }

        printf("\n");

        // loop to generate a gap to make a right to left tower
        for (size_t dot = height - 1; dot > i; dot--)
        {
            putchar(' ');
        }
    }
};
