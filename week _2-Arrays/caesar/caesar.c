#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
int main(int argc, string argv[])
{
    if (argc == 2)
    {
        string p = (argv[1]);

        int key = atoi(argv[1]);

        if (key >= 1)
        {
            string text = get_string("plaintext:  ");
            printf("ciphertext: ");
            for (int cont = 0; cont <= strlen(text); cont++)
            {
                if (text[cont] >= 'A' && text[cont] <= 'z')
                {
                    if (isalpha(text[cont] + key))
                    {
                        printf("%c", ((text[cont] + key)));
                    }
                    else
                    {
                        printf("%c", (((text[cont] - 'a' + key) % 26 + 'a')));
                    }
                }
                else if (text[cont] == '.' || text[cont] == ',' || text[cont] == ' ' || text[cont] == '!')
                {
                    printf("%c", text[cont]);
                }
            }
            printf("\n");
            return 0;
        }
        else if (key <= 0 || isalpha(key) || key == 0 || argv[2])
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }
    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
}