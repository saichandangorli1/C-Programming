// Q .3 Write a program to check whether a number is divisible by 97 or not

#include <stdio.h>
int main()
{
    int number = 7896542;
    printf("%d", number % 97);
    // Since the output is 63 and not zero the number is not divisible by 97
    return 0;
}