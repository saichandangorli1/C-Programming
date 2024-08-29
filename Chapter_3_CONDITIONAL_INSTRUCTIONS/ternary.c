#include <stdio.h>
int main()
{
    int min, a = 5, b = 6;
    min = (a < b) ? a : b;
    printf("minimum : %d", min);
    return 0;
}