// Generates multiples '#' to represent two brick towers like in the Mario game, taking an input of 1 to 8 to manipulate the height of two towers.
#include <cs50.h>
#include <stdio.h>

int main(void)
{

    int height;

    // input to determine the height of the towers
    do
    {
        height = get_int("Height: ");
    }

    // loop to filter only values between 1 and 8
    while (height <= 0 || height >= 9);

    // loop to generate two towers
    for (int i = 0; i < height; i++)
    {

        // loop to generate a gap for the first tower
        for (int dot = height - 1; dot > i; dot--)
        {
            printf(" ");
        }

        // loop to generate the bricks according to the rows of the first tower
        for (int row = 0; row <= i; row++)
        {
            printf("#");
        }
        
        // gap between the tow towers
        printf("  ");

        // loop to generate the bricks according to the rows of the second tower
        for (int row2 = 0; row2 <= i; row2++)
        {
            printf("#");
        }

        printf("\n");
    }
}
