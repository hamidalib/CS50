#include <cs50.h>
#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string input = get_string("Before: ");
    printf("After:  ");
    int strLen = strlen(input);
    for(int i = 0; i < strLen; i++)
    {
        printf("%c", toupper(input[i]));
    }
    printf("\n");
}
