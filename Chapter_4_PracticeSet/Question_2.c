// Q .2 WAP to print multiplication table of 10 in reversed order

#include <stdio.h>
int main()
{
    int number = 10;
    for (int i = 10; i > 0; i--)
    {
        printf("%d\n", number * i);
    }

    return 0;
}