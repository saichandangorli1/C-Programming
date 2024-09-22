// 1 .WAP to print the multiplication of a given number n

#include <stdio.h>
int main()
{
    int number;
    printf("enter a number : ");
    scanf("%d", &number);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n", number * i);
    }

    return 0;
}