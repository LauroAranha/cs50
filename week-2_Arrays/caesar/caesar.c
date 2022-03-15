// Program that reproduces the cryptography made by caesar, taking an input via command line argument (key for the cryptography) and taking another input via console.
// Usage example: 
//      Input key: 1
//      Plaintext: abc

//      Output: bcd        

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(int argc, string argv[])
{
    // checks if there is only one argument (key)
    if (argc == 2)
    {
        // converts the argument to a string
        string p = (argv[1]);

        // converts the string to an int (key)
        int key = atoi(argv[1]);

        //checks if the key is a positive number
        if (key >= 1)
        {
            // input of the text that will be encrypted
            string text = get_string("plaintext:  ");

            // output of encrypted text
            printf("ciphertext: ");

            // loop to go through all the text
            for (int cont = 0; cont <= strlen(text); cont++)
            {

                // filter the characters
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

                // filter the periods, commas and toher things
                else if (text[cont] == '.' || text[cont] == ',' || text[cont] == ' ' || text[cont] == '!')
                {
                    printf("%c", text[cont]);
                }
            }
            printf("\n");
            return 0;
        }

        // checks if the argument is valid
        else if (key <= 0 || isalpha(key) || key == 0 || argv[2])
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }
    // checks if the argument is valid
    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
}
