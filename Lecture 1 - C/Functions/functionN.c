// This function files prints "Hello World" n times



#include <stdio.h>
void hello(int n);

int main(void)
{
    hello(6);
}

void hello(int n)
{
    for(int i=0; i<n; i++)
    {
        printf("Hello World\n");
    }
}
