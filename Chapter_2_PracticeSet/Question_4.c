// Q .4 Explain step by step evaluation of 3 * x / y - z + k, where x = 2, y = = 3, z = 3, k = 1

#include <stdio.h>
int main()
{
    int x = 2, y = 3, z = 3, k = 1;
    int answer = 3 * x / y - z + k;
    // here we are refering the OPERATOR PRECEDENCE
    /*
    The following table lists the operator priority in C

    |Priority|Operators|
    | ------ | ------- |
    | 1st    | \* / %  |
    | 2nd    | + -     |
    | 3rd    | =       |

    */

//     the expected answer is 0
    printf("%d", answer);
    return 0;
}