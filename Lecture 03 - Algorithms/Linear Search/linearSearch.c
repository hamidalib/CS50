#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int numbers[] = {10, 20, 30, 40, 50};
    int n = get_int("Number: ");

    {
    for (int i = 0; i < 5; i++)
    {
        if (numbers[i] == n)
        {
            printf("Found!\n");
            return 0;
        }
    }
    printf("Not found!\n");
    return 1;
}
}
