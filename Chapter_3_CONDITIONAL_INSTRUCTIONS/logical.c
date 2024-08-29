#include <stdio.h>
int main()
{
    int a = 1, b = 1;
    printf("the value of a and b = %d\n", a && b);
    printf("the value of a or b = %d\n", a || b);
    printf("the value of a and b = %d\n", !(a && b));
    return 0;
}