#include <cs50.h>
#include <stdio.h>

int main(void)
{

    int height;

    do
    {
        height = get_int("Height: ");
    }

    while (height <= 0 || height >= 9);

    for (int i = 0; i < height; i++)
    {

        for (int dot = height - 1; dot > i; dot--)
        {
            printf(" ");
        }
        for (int row = 0; row <= i; row++)
        {
            printf("#");
        }
        printf("  ");
        for (int row2 = 0; row2 <= i; row2++)
        {
            printf("#");
        }

        printf("\n");
    }
};
