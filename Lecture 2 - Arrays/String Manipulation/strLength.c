#include <stdio.h>
#include <cs50.h>
int strLngth(string s);
int main(void)
{
    string name = get_string("What is your name? ");
    int stL = strLngth(name);

    printf("Name length: %i\n", stL);
}

int strLngth(string name)
{
    int n = 0;
    while(name[n] != '\0')
    {
        n++;
    }
    return n;
}
