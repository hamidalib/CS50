// This can only be used with cs50.h library.


#include <stdio.h>
#include <cs50.h>
int add(int a, int b);
int main(void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");

    int result = add(x, y);

    printf("%i\n", result);
}

int add(int a, int b)
{
    return a + b;
}
