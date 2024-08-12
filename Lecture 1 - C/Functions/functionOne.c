// This function files prints "Hello World" 5 times


#include <stdio.h>
void hello(void);
int main(void)
{
    for (int i=0; i<5; i++)
    {
        hello();
    }
}
void hello(void)
{
    printf("Hello World\n");
}
