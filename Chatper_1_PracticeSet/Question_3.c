//  Q.3 Write a program to convert Celsius to fehrenheit.

// CODE =>

#include <stdio.h>
int main()
{
    float celsius = 30;
    float fehrenheit = ((celsius * 9) / 5) + 32;
    printf("The convertion of celsius %f to fehrenheit is %f", celsius, fehrenheit);
    return 0;
}