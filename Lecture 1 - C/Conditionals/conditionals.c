#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int age = get_int("What is your age?\n");

    if (age >= 65)
    {
        printf("Your age is %i & you are over-age to drive!\n", age);
    }
    else if (age >= 21)
    {
        printf("Your age is %i & you can drive.\n", age);
    }
    else
    {
        printf("Your age is %i & you are under-age to drive!\n", age);
    }
}
