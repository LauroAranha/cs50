#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
int main(void)
{

    string text = get_string("Text: ");

    int letter = 0, sentence = 0, pontuation = 0, words = 1, total = strlen(text);

    for (int i = 0; i < strlen(text); i++)
    {
        if (isalpha(text[i]))
        {
            letter++;
        }

        if (isspace(text[i]))
        {
            words++;
        }

        if (text[i] == ('.'))
        {
            sentence++;
        }
        else if (text[i] == ('?'))
        {
            sentence++;
        }
        else if (text[i] == ('!'))
        {
            sentence++;
        }
    }

    int index = round(0.0588 * (100 * (float)letter / (float)words) - 0.296 * (100 * (float)sentence / (float)words) - 15.8);
    string answerIndex = "";

    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %d\n", index);
    }
}
