//  Q.1  Write  C program to calculate area of a rectangle:
// a. Using hard coded inputs.
// b. Using inputs supplied by the user.

//  => CODE

// Hard coded

// #include <stdio.h>
// int main()
// {
//     int length = 4;
//     int width = 12;
//     int Area = length * width;
//     printf("Area of a rectangle is : %d ", Area);
//     return 0;
// }

// Using inputs supplied by the user.

#include <stdio.h>
int main()
{
    int length, width;
    printf("Enter the length : ");
    scanf("%d", &length);
    printf("Enter the width : ");
    scanf("%d", &width);
    int Area = length * width;
    printf("The Area of a rectangle is : %d",Area);
    return 0;
}