// 1 .Which of the following is invalid in C?

//     a. int a = 1; int b = a;
//     b. int v = 3 * 3;
//     c. char dt = '21 dec 2020';

#include <stdio.h>
int main()
{

    int a = 1;
    int b = a;
    int v = 3 * 3;
    // char dt = '21 dec 2020'; // invalid
    // in char only 1 character is only allowed
    // warning: character constant too long for its type
    return 0;
}