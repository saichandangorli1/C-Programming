// Q.2 Calculate the area of a circle and modify the same program to calculate the volume of a cylinder given its radius and height.

// CODE =>

#include <stdio.h>
int main()
{
    int radius = 6;
    int height = 7;
    float areaCircle = 3.14 * radius * radius;
    float volumeCylinder = 3.14 * radius * radius * height;
    printf("the area of the circle with radius %d is %f ", radius, areaCircle);
    printf("the volume of the cylinder with radius %d and height %d is %f ", radius, height, volumeCylinder);
    return 0;
}