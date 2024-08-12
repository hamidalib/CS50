#include <stdio.h>
#include <cs50.h>
void printRow(int space, int bricks);
int main(void)
{
    // Propmt user for pyramid height input

    int n;
    do
    {
        n = get_int("Pyramid height: ");
    }
    while (n <= 0);

    // Printing Pyramid

    for (int i=0; i<n; i++)
    {
        // Making Spaces
        int space = n - i - 1;
        printRow(space, i+1);
    }
}

void printRow(int space, int bricks)
{
    // Print Spaces First
    for(int i=0; i< space; i++)
    {
        printf(" ");
    }

    // Now, print actual bricks

    for(int i=0; i< bricks; i++)
    {
        printf("#");
    }
    printf("\n");
}
