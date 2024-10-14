#include <cs50.h>
#include <stdio.h>

int strLength(string s);

int main(void)
{
    // Prompting user for name
    string name = get_string("Name: ");

    // Now, printing length of name

    int nameLen = strLength(name);

    printf("Lenght of name is: %i\n", nameLen);

}

int strLength(string s)
{
    int n = 0;
    while(s[n] != '\0')
    {
        n++;
    }

    return n;
}
