#include <stdio.h>
#include <cs50.h>
void printRow(int height);
int main(void)
{
    int h = get_int("Height: ");

    printRow(h);
}

void printRow(int height)
{
    for(int i=0; i<= height; i++)
    {
        printf("#\n");
    }
}
