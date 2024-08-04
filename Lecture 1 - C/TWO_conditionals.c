#include <stdio.h>
#include <cs50.h>
int main(void)
{
    char userInput = get_char("Enter your command\n");

    if (userInput == 'y' || userInput == 'Y')
    {
        printf("You agreed!\n");
    }
    else if (userInput == 'n' || userInput == 'N')
    {
        printf("You disagreed\n");
    }
    else
    {
        printf("Invalid command!!!\n");
    }
}