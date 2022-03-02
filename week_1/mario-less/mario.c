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

    for (int i = 0; i <= height; i++)
    {

        for (size_t row = 0; row < i; row++)
        {
            putchar('#');
        }
        printf("\n");
        for (size_t dot = height - 1; dot > i; dot--)
        {
            putchar(' ');
        }
    }
};