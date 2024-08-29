#include <stdio.h>
int main()
{
    int marks = 98;

    if (marks > 90)
    {
        printf("A grade");
    }
    else if (marks <= 90 && marks > 70)
    {
        printf("B grade");
    }
    else
    {

        printf("C grade");
    }

    return 0;
}


