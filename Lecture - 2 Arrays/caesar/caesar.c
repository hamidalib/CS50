#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

// Calling encrypt function prototype
string encrypt(string plainText, int key);

int main(void)
{
    // Getting key "k" from user
    int key = get_int("Key: ");

    // Getting text to encode from user
    string plainText = get_string("Plaintext: ");

    // Encoding plaintext
    string cipher = encrypt(plainText, key);

    // Printing encoded text
    printf("Cipher: %s\n", cipher);
}

// Making encrypt function

string encrypt(string plainText, int key)
{
    string ciphertext = plaintext;

    int n = strlen(plainText);

    for (int i = 0; i < n; i++)
    {
        if (isupper(plainText[i]))
        {
            cipherText[i] = ((plainText[i] - 'A' + key) % 26) + 'A';
        }
        else if (islower(plainText[i]))
        {
            cipherText[i] = ((plainText[i] - 'a' + key) % 26) + 'a';
        }
        else
        {
            cipherText[i] = plainText[i];
        }
    }
    return cipherText;
}
