// This can only be used with cs50.h library.

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    char cmd = get_char("Do you agree?\n");

    if (cmd == 'y' || cmd == 'Y'){
        printf("You agreed\n");
    }
    else if (cmd == 'n' || cmd == 'N')
    {
        printf("You didn't agree");
    }
    else
    {
        printf("Invalid Command!!!");
    }
}
