// Q.4 Write a program to calculate simple interest for a set of values representing principal, number of years and rate of interest.

#include <stdio.h>
int main()
{
    float principal = 15000;
    float rateOfInterest = 8.5;
    float years = 4;
    printf("The Value of simple interest is %f ", ((principal * rateOfInterest * years) / 100));

    return 0;
}